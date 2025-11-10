#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_hxcodec_flixel_FlxVideo
#include <hxcodec/flixel/FlxVideo.h>
#endif
#ifndef INCLUDED_hxcodec_openfl_Video
#include <hxcodec/openfl/Video.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f0e8aa04ecc8f57_21_new,"hxcodec.flixel.FlxVideo","new",0x8cb7f6a5,"hxcodec.flixel.FlxVideo.new","hxcodec/flixel/FlxVideo.hx",21,0x79f0e64b)
HX_DEFINE_STACK_FRAME(_hx_pos_4f0e8aa04ecc8f57_9_new,"hxcodec.flixel.FlxVideo","new",0x8cb7f6a5,"hxcodec.flixel.FlxVideo.new","hxcodec/flixel/FlxVideo.hx",9,0x79f0e64b)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0e8aa04ecc8f57_29_play,"hxcodec.flixel.FlxVideo","play",0x9597840f,"hxcodec.flixel.FlxVideo.play","hxcodec/flixel/FlxVideo.hx",29,0x79f0e64b)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0e8aa04ecc8f57_48_dispose,"hxcodec.flixel.FlxVideo","dispose",0x3e61ad64,"hxcodec.flixel.FlxVideo.dispose","hxcodec/flixel/FlxVideo.hx",48,0x79f0e64b)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0e8aa04ecc8f57_67_onEnterFrame,"hxcodec.flixel.FlxVideo","onEnterFrame",0x838d0f0f,"hxcodec.flixel.FlxVideo.onEnterFrame","hxcodec/flixel/FlxVideo.hx",67,0x79f0e64b)
namespace hxcodec{
namespace flixel{

void FlxVideo_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hxcodec::flixel::FlxVideo,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_4f0e8aa04ecc8f57_21_new)
HXLINE(  21)			 ::hxcodec::flixel::FlxVideo _gthis1 = _gthis;
HXDLIN(  21)			int _hx_tmp;
HXDLIN(  21)			if (::flixel::FlxG_obj::sound->muted) {
HXLINE(  21)				_hx_tmp = 0;
            			}
            			else {
HXLINE(  21)				_hx_tmp = 1;
            			}
HXDLIN(  21)			_gthis1->set_volume(::Std_obj::_hx_int((( (Float)(_hx_tmp) ) * (::flixel::FlxG_obj::sound->volume * ( (Float)(100) )))));
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_4f0e8aa04ecc8f57_9_new)
HXLINE(  12)		this->autoResize = true;
HXLINE(  15)		 ::hxcodec::flixel::FlxVideo _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  16)		super::__construct();
HXLINE(  18)		this->onOpening->add( ::Dynamic(new _hx_Closure_0(_gthis)),null(),null());
HXLINE(  25)		::flixel::FlxG_obj::addChildBelowMouse(::hx::ObjectPtr<OBJ_>(this),null());
            	}

Dynamic FlxVideo_obj::__CreateEmpty() { return new FlxVideo_obj; }

void *FlxVideo_obj::_hx_vtable = 0;

Dynamic FlxVideo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxVideo_obj > _hx_result = new FlxVideo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxVideo_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4cc42801) {
		if (inClassId<=(int)0x3526b1a9) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x3526b1a9;
			}
		} else {
			return inClassId==(int)0x4cc42801;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7546c1eb;
	}
}

int FlxVideo_obj::play(::String location,::hx::Null< bool >  __o_shouldLoop){
            		bool shouldLoop = __o_shouldLoop.Default(false);
            	HX_STACKFRAME(&_hx_pos_4f0e8aa04ecc8f57_29_play)
HXLINE(  30)		if (::flixel::FlxG_obj::autoPause) {
HXLINE(  32)			if (!(::flixel::FlxG_obj::signals->focusGained->has(this->resume_dyn()))) {
HXLINE(  33)				::flixel::FlxG_obj::signals->focusGained->add(this->resume_dyn());
            			}
HXLINE(  35)			if (!(::flixel::FlxG_obj::signals->focusLost->has(this->pause_dyn()))) {
HXLINE(  36)				::flixel::FlxG_obj::signals->focusLost->add(this->pause_dyn());
            			}
            		}
HXLINE(  39)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null(),null(),null());
HXLINE(  41)		if (::sys::FileSystem_obj::exists((::Sys_obj::getCwd() + location))) {
HXLINE(  42)			return this->super::play((::Sys_obj::getCwd() + location),shouldLoop);
            		}
            		else {
HXLINE(  44)			return this->super::play(location,shouldLoop);
            		}
HXLINE(  41)		return 0;
            	}


void FlxVideo_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_4f0e8aa04ecc8f57_48_dispose)
HXLINE(  49)		if (::flixel::FlxG_obj::autoPause) {
HXLINE(  51)			if (::flixel::FlxG_obj::signals->focusGained->has(this->resume_dyn())) {
HXLINE(  52)				::flixel::FlxG_obj::signals->focusGained->remove(this->resume_dyn());
            			}
HXLINE(  54)			if (::flixel::FlxG_obj::signals->focusLost->has(this->pause_dyn())) {
HXLINE(  55)				::flixel::FlxG_obj::signals->focusLost->remove(this->pause_dyn());
            			}
            		}
HXLINE(  58)		if (::openfl::Lib_obj::get_current()->stage->hasEventListener(HX_("enterFrame",f5,03,50,02))) {
HXLINE(  59)			::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null());
            		}
HXLINE(  61)		this->super::dispose();
HXLINE(  63)		if (::flixel::FlxG_obj::game->contains(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  63)			::flixel::FlxG_obj::game->removeChild(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


void FlxVideo_obj::onEnterFrame( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_4f0e8aa04ecc8f57_67_onEnterFrame)
HXLINE(  68)		if (this->autoResize) {
HXLINE(  70)			Float aspectRatio = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(::flixel::FlxG_obj::height) ));
HXLINE(  72)			int _hx_tmp = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN(  72)			if (((( (Float)(_hx_tmp) ) / ( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) )) > aspectRatio)) {
HXLINE(  75)				this->set_width((( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ) * aspectRatio));
HXLINE(  76)				this->set_height(( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ));
            			}
            			else {
HXLINE(  81)				this->set_width(( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ));
HXLINE(  82)				this->set_height((( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ) * (( (Float)(1) ) / aspectRatio)));
            			}
            		}
HXLINE(  87)		int _hx_tmp;
HXDLIN(  87)		if (::flixel::FlxG_obj::sound->muted) {
HXLINE(  87)			_hx_tmp = 0;
            		}
            		else {
HXLINE(  87)			_hx_tmp = 1;
            		}
HXDLIN(  87)		this->set_volume(::Std_obj::_hx_int((( (Float)(_hx_tmp) ) * (::flixel::FlxG_obj::sound->volume * ( (Float)(100) )))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxVideo_obj,onEnterFrame,(void))


::hx::ObjectPtr< FlxVideo_obj > FlxVideo_obj::__new() {
	::hx::ObjectPtr< FlxVideo_obj > __this = new FlxVideo_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxVideo_obj > FlxVideo_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxVideo_obj *__this = (FlxVideo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxVideo_obj), true, "hxcodec.flixel.FlxVideo"));
	*(void **)__this = FlxVideo_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxVideo_obj::FlxVideo_obj()
{
}

::hx::Val FlxVideo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoResize") ) { return ::hx::Val( autoResize ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return ::hx::Val( onEnterFrame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxVideo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"autoResize") ) { autoResize=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVideo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoResize",c3,6a,46,74));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxVideo_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxVideo_obj,autoResize),HX_("autoResize",c3,6a,46,74)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxVideo_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxVideo_obj_sMemberFields[] = {
	HX_("autoResize",c3,6a,46,74),
	HX_("play",f4,2d,5a,4a),
	HX_("dispose",9f,80,4c,bb),
	HX_("onEnterFrame",f4,a5,93,da),
	::String(null()) };

::hx::Class FlxVideo_obj::__mClass;

void FlxVideo_obj::__register()
{
	FlxVideo_obj _hx_dummy;
	FlxVideo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcodec.flixel.FlxVideo",33,c0,2c,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxVideo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxVideo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxVideo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxVideo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcodec
} // end namespace flixel
