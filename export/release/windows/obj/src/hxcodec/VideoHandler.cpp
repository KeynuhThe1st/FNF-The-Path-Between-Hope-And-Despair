#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
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
#ifndef INCLUDED_hxcodec_VideoHandler
#include <hxcodec/VideoHandler.h>
#endif
#ifndef INCLUDED_hxcodec_vlc_VLCBitmap
#include <hxcodec/vlc/VLCBitmap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_35ff422b99497c2c_14_new,"hxcodec.VideoHandler","new",0x83d14d09,"hxcodec.VideoHandler.new","hxcodec/VideoHandler.hx",14,0x90ad0fa6)
static const int _hx_array_data_6afa1497_1[] = {
	(int)32,
};
HX_LOCAL_STACK_FRAME(_hx_pos_35ff422b99497c2c_39_onVLCOpening,"hxcodec.VideoHandler","onVLCOpening",0xc8283ea1,"hxcodec.VideoHandler.onVLCOpening","hxcodec/VideoHandler.hx",39,0x90ad0fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_35ff422b99497c2c_52_onVLCEncounteredError,"hxcodec.VideoHandler","onVLCEncounteredError",0xadb8052d,"hxcodec.VideoHandler.onVLCEncounteredError","hxcodec/VideoHandler.hx",52,0x90ad0fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_35ff422b99497c2c_58_onVLCEndReached,"hxcodec.VideoHandler","onVLCEndReached",0x202e584e,"hxcodec.VideoHandler.onVLCEndReached","hxcodec/VideoHandler.hx",58,0x90ad0fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_35ff422b99497c2c_94_playVideo,"hxcodec.VideoHandler","playVideo",0xf04e2350,"hxcodec.VideoHandler.playVideo","hxcodec/VideoHandler.hx",94,0x90ad0fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_35ff422b99497c2c_117_update,"hxcodec.VideoHandler","update",0xf5d29900,"hxcodec.VideoHandler.update","hxcodec/VideoHandler.hx",117,0x90ad0fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_35ff422b99497c2c_136_calcSize,"hxcodec.VideoHandler","calcSize",0xd0f852ad,"hxcodec.VideoHandler.calcSize","hxcodec/VideoHandler.hx",136,0x90ad0fa6)
namespace hxcodec{

void VideoHandler_obj::__construct(::hx::Null< int >  __o_IndexModifier){
            		int IndexModifier = __o_IndexModifier.Default(0);
            	HX_STACKFRAME(&_hx_pos_35ff422b99497c2c_14_new)
HXLINE(  25)		this->pauseMusic = false;
HXLINE(  23)		this->finishCallback = null();
HXLINE(  22)		this->openingCallback = null();
HXLINE(  20)		this->canUseAutoResize = true;
HXLINE(  19)		this->canUseSound = true;
HXLINE(  17)		this->skipKeys = ::Array_obj< int >::fromData( _hx_array_data_6afa1497_1,1);
HXLINE(  16)		this->canSkip = true;
HXLINE(  29)		super::__construct();
HXLINE(  31)		this->onOpening = this->onVLCOpening_dyn();
HXLINE(  32)		this->onEndReached = this->onVLCEndReached_dyn();
HXLINE(  33)		this->onEncounteredError = this->onVLCEncounteredError_dyn();
HXLINE(  35)		::flixel::FlxG_obj::addChildBelowMouse(::hx::ObjectPtr<OBJ_>(this),IndexModifier);
            	}

Dynamic VideoHandler_obj::__CreateEmpty() { return new VideoHandler_obj; }

void *VideoHandler_obj::_hx_vtable = 0;

Dynamic VideoHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoHandler_obj > _hx_result = new VideoHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VideoHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x317b3ab1) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0ac34cb5) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ac34cb5;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x317b3ab1;
		}
	} else {
		return inClassId==(int)0x4cc42801 || inClassId==(int)0x6b353933;
	}
}

void VideoHandler_obj::onVLCOpening(){
            	HX_STACKFRAME(&_hx_pos_35ff422b99497c2c_39_onVLCOpening)
HXLINE(  45)		int _hx_tmp;
HXDLIN(  45)		bool _hx_tmp1;
HXDLIN(  45)		if (!(::flixel::FlxG_obj::sound->muted)) {
HXLINE(  45)			_hx_tmp1 = !(this->canUseSound);
            		}
            		else {
HXLINE(  45)			_hx_tmp1 = true;
            		}
HXDLIN(  45)		if (_hx_tmp1) {
HXLINE(  45)			_hx_tmp = 0;
            		}
            		else {
HXLINE(  45)			_hx_tmp = 1;
            		}
HXDLIN(  45)		this->set_volume(::Std_obj::_hx_int(((( (Float)(_hx_tmp) ) * ::flixel::FlxG_obj::sound->volume) * ( (Float)(100) ))));
HXLINE(  47)		if (::hx::IsNotNull( this->openingCallback )) {
HXLINE(  48)			this->openingCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCOpening,(void))

void VideoHandler_obj::onVLCEncounteredError(){
            	HX_STACKFRAME(&_hx_pos_35ff422b99497c2c_52_onVLCEncounteredError)
HXLINE(  53)		::openfl::Lib_obj::get_application()->_hx___window->alert(HX_("Error cannot be specified",58,2f,93,9b),HX_("VLC Error!",ec,1e,8f,e9));
HXLINE(  54)		this->onVLCEndReached();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCEncounteredError,(void))

void VideoHandler_obj::onVLCEndReached(){
            	HX_STACKFRAME(&_hx_pos_35ff422b99497c2c_58_onVLCEndReached)
HXLINE(  63)		bool _hx_tmp;
HXDLIN(  63)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  63)			_hx_tmp = this->pauseMusic;
            		}
            		else {
HXLINE(  63)			_hx_tmp = false;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  64)			::flixel::FlxG_obj::sound->music->resume();
            		}
HXLINE(  66)		if (::openfl::Lib_obj::get_current()->stage->hasEventListener(HX_("enterFrame",f5,03,50,02))) {
HXLINE(  67)			::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null());
            		}
HXLINE(  69)		if (::flixel::FlxG_obj::autoPause) {
HXLINE(  71)			if (::flixel::FlxG_obj::signals->focusGained->has(this->resume_dyn())) {
HXLINE(  72)				::flixel::FlxG_obj::signals->focusGained->remove(this->resume_dyn());
            			}
HXLINE(  74)			if (::flixel::FlxG_obj::signals->focusLost->has(this->pause_dyn())) {
HXLINE(  75)				::flixel::FlxG_obj::signals->focusLost->remove(this->pause_dyn());
            			}
            		}
HXLINE(  78)		this->dispose();
HXLINE(  80)		if (::flixel::FlxG_obj::game->contains(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  80)			::flixel::FlxG_obj::game->removeChild(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  82)		if (::hx::IsNotNull( this->finishCallback )) {
HXLINE(  83)			this->finishCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCEndReached,(void))

void VideoHandler_obj::playVideo(::String Path,::hx::Null< bool >  __o_Loop,::hx::Null< bool >  __o_PauseMusic){
            		bool Loop = __o_Loop.Default(false);
            		bool PauseMusic = __o_PauseMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_35ff422b99497c2c_94_playVideo)
HXLINE(  95)		this->pauseMusic = PauseMusic;
HXLINE(  97)		bool _hx_tmp;
HXDLIN(  97)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  97)			_hx_tmp = PauseMusic;
            		}
            		else {
HXLINE(  97)			_hx_tmp = false;
            		}
HXDLIN(  97)		if (_hx_tmp) {
HXLINE(  98)			::flixel::FlxG_obj::sound->music->pause();
            		}
HXLINE( 100)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null(),null(),null());
HXLINE( 102)		if (::flixel::FlxG_obj::autoPause) {
HXLINE( 104)			::flixel::FlxG_obj::signals->focusGained->add(this->resume_dyn());
HXLINE( 105)			::flixel::FlxG_obj::signals->focusLost->add(this->pause_dyn());
            		}
HXLINE( 110)		if (::sys::FileSystem_obj::exists((::Sys_obj::getCwd() + Path))) {
HXLINE( 111)			this->play((::Sys_obj::getCwd() + Path),Loop);
            		}
            		else {
HXLINE( 113)			this->play(Path,Loop);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(VideoHandler_obj,playVideo,(void))

void VideoHandler_obj::update( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_35ff422b99497c2c_117_update)
HXLINE( 119)		bool _hx_tmp;
HXDLIN( 119)		bool _hx_tmp1;
HXDLIN( 119)		if (this->canSkip) {
HXLINE( 119)			_hx_tmp1 = ::flixel::FlxG_obj::keys->checkKeyArrayState(this->skipKeys,2);
            		}
            		else {
HXLINE( 119)			_hx_tmp1 = false;
            		}
HXDLIN( 119)		if (_hx_tmp1) {
HXLINE( 119)			if (this->get_isPlaying()) {
HXLINE( 119)				_hx_tmp = this->isDisplaying;
            			}
            			else {
HXLINE( 119)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 119)			_hx_tmp = false;
            		}
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 120)			this->onVLCEndReached();
            		}
HXLINE( 126)		bool _hx_tmp2;
HXDLIN( 126)		if (this->canUseAutoResize) {
HXLINE( 126)			if ((this->videoWidth > 0)) {
HXLINE( 126)				_hx_tmp2 = (this->videoHeight > 0);
            			}
            			else {
HXLINE( 126)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE( 126)			_hx_tmp2 = false;
            		}
HXDLIN( 126)		if (_hx_tmp2) {
HXLINE( 128)			this->set_width(( (Float)(this->calcSize(0)) ));
HXLINE( 129)			this->set_height(( (Float)(this->calcSize(1)) ));
            		}
HXLINE( 132)		int _hx_tmp3;
HXDLIN( 132)		bool _hx_tmp4;
HXDLIN( 132)		if (!(::flixel::FlxG_obj::sound->muted)) {
HXLINE( 132)			_hx_tmp4 = !(this->canUseSound);
            		}
            		else {
HXLINE( 132)			_hx_tmp4 = true;
            		}
HXDLIN( 132)		if (_hx_tmp4) {
HXLINE( 132)			_hx_tmp3 = 0;
            		}
            		else {
HXLINE( 132)			_hx_tmp3 = 1;
            		}
HXDLIN( 132)		this->set_volume(::Std_obj::_hx_int(((( (Float)(_hx_tmp3) ) * ::flixel::FlxG_obj::sound->volume) * ( (Float)(100) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,update,(void))

int VideoHandler_obj::calcSize(int Ind){
            	HX_STACKFRAME(&_hx_pos_35ff422b99497c2c_136_calcSize)
HXLINE( 137)		int appliedWidth = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXDLIN( 137)		Float appliedWidth1 = (( (Float)(appliedWidth) ) * (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(::flixel::FlxG_obj::height) )));
HXLINE( 138)		int appliedHeight = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN( 138)		Float appliedHeight1 = (( (Float)(appliedHeight) ) * (( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(::flixel::FlxG_obj::width) )));
HXLINE( 140)		if ((appliedHeight1 > ::openfl::Lib_obj::get_current()->stage->stageHeight)) {
HXLINE( 141)			appliedHeight1 = ( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) );
            		}
HXLINE( 143)		if ((appliedWidth1 > ::openfl::Lib_obj::get_current()->stage->stageWidth)) {
HXLINE( 144)			appliedWidth1 = ( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) );
            		}
HXLINE( 146)		switch((int)(Ind)){
            			case (int)0: {
HXLINE( 149)				return ::Std_obj::_hx_int(appliedWidth1);
            			}
            			break;
            			case (int)1: {
HXLINE( 151)				return ::Std_obj::_hx_int(appliedHeight1);
            			}
            			break;
            		}
HXLINE( 154)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,calcSize,return )


::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__new(::hx::Null< int >  __o_IndexModifier) {
	::hx::ObjectPtr< VideoHandler_obj > __this = new VideoHandler_obj();
	__this->__construct(__o_IndexModifier);
	return __this;
}

::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_IndexModifier) {
	VideoHandler_obj *__this = (VideoHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoHandler_obj), true, "hxcodec.VideoHandler"));
	*(void **)__this = VideoHandler_obj::_hx_vtable;
	__this->__construct(__o_IndexModifier);
	return __this;
}

VideoHandler_obj::VideoHandler_obj()
{
}

void VideoHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoHandler);
	HX_MARK_MEMBER_NAME(canSkip,"canSkip");
	HX_MARK_MEMBER_NAME(skipKeys,"skipKeys");
	HX_MARK_MEMBER_NAME(canUseSound,"canUseSound");
	HX_MARK_MEMBER_NAME(canUseAutoResize,"canUseAutoResize");
	HX_MARK_MEMBER_NAME(openingCallback,"openingCallback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::hxcodec::vlc::VLCBitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canSkip,"canSkip");
	HX_VISIT_MEMBER_NAME(skipKeys,"skipKeys");
	HX_VISIT_MEMBER_NAME(canUseSound,"canUseSound");
	HX_VISIT_MEMBER_NAME(canUseAutoResize,"canUseAutoResize");
	HX_VISIT_MEMBER_NAME(openingCallback,"openingCallback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::hxcodec::vlc::VLCBitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { return ::hx::Val( canSkip ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"skipKeys") ) { return ::hx::Val( skipKeys ); }
		if (HX_FIELD_EQ(inName,"calcSize") ) { return ::hx::Val( calcSize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playVideo") ) { return ::hx::Val( playVideo_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canUseSound") ) { return ::hx::Val( canUseSound ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onVLCOpening") ) { return ::hx::Val( onVLCOpening_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { return ::hx::Val( openingCallback ); }
		if (HX_FIELD_EQ(inName,"onVLCEndReached") ) { return ::hx::Val( onVLCEndReached_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"canUseAutoResize") ) { return ::hx::Val( canUseAutoResize ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"onVLCEncounteredError") ) { return ::hx::Val( onVLCEncounteredError_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { canSkip=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"skipKeys") ) { skipKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canUseSound") ) { canUseSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { openingCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"canUseAutoResize") ) { canUseAutoResize=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("canSkip",af,fe,ac,6a));
	outFields->push(HX_("skipKeys",13,d0,5b,bd));
	outFields->push(HX_("canUseSound",38,af,df,77));
	outFields->push(HX_("canUseAutoResize",ba,eb,10,16));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canSkip),HX_("canSkip",af,fe,ac,6a)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(VideoHandler_obj,skipKeys),HX_("skipKeys",13,d0,5b,bd)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canUseSound),HX_("canUseSound",38,af,df,77)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canUseAutoResize),HX_("canUseAutoResize",ba,eb,10,16)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoHandler_obj,openingCallback),HX_("openingCallback",3d,71,34,3d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoHandler_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoHandler_obj_sMemberFields[] = {
	HX_("canSkip",af,fe,ac,6a),
	HX_("skipKeys",13,d0,5b,bd),
	HX_("canUseSound",38,af,df,77),
	HX_("canUseAutoResize",ba,eb,10,16),
	HX_("openingCallback",3d,71,34,3d),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("onVLCOpening",6a,18,0c,20),
	HX_("onVLCEncounteredError",44,2a,89,db),
	HX_("onVLCEndReached",25,02,54,8c),
	HX_("playVideo",e7,41,e0,57),
	HX_("update",09,86,05,87),
	HX_("calcSize",f6,53,87,46),
	::String(null()) };

::hx::Class VideoHandler_obj::__mClass;

void VideoHandler_obj::__register()
{
	VideoHandler_obj _hx_dummy;
	VideoHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcodec.VideoHandler",97,14,fa,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcodec
