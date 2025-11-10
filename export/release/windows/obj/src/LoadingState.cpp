#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_LoadingScreen
#include <LoadingScreen.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MultiCallback
#include <MultiCallback.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_StageData
#include <StageData.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b9d652bf7289928_19_new,"LoadingState","new",0x2bad3187,"LoadingState.new","LoadingState.hx",19,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_86_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",86,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_71_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",71,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_47_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",47,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_93_checkLoadSong,"LoadingState","checkLoadSong",0xc27149ea,"LoadingState.checkLoadSong","LoadingState.hx",93,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_102_checkLoadSong,"LoadingState","checkLoadSong",0xc27149ea,"LoadingState.checkLoadSong","LoadingState.hx",102,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_106_checkLibrary,"LoadingState","checkLibrary",0xd141a10c,"LoadingState.checkLibrary","LoadingState.hx",106,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_115_checkLibrary,"LoadingState","checkLibrary",0xd141a10c,"LoadingState.checkLibrary","LoadingState.hx",115,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_120_update,"LoadingState","update",0x70c61742,"LoadingState.update","LoadingState.hx",120,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_138_onLoad,"LoadingState","onLoad",0xd402341e,"LoadingState.onLoad","LoadingState.hx",138,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_199_destroy,"LoadingState","destroy",0xc344ada1,"LoadingState.destroy","LoadingState.hx",199,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_147_getSongPath,"LoadingState","getSongPath",0xa60766f7,"LoadingState.getSongPath","LoadingState.hx",147,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_152_getVocalPath,"LoadingState","getVocalPath",0xfda3e53d,"LoadingState.getVocalPath","LoadingState.hx",152,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_157_loadAndSwitchState,"LoadingState","loadAndSwitchState",0xbf595d65,"LoadingState.loadAndSwitchState","LoadingState.hx",157,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_161_getNextState,"LoadingState","getNextState",0xdef1eea1,"LoadingState.getNextState","LoadingState.hx",161,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_243_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",243,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_265_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",265,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_206_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",206,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_21_boot,"LoadingState","boot",0x03f7252b,"LoadingState.boot","LoadingState.hx",21,0x53ff9bc9)

void LoadingState_obj::__construct( ::flixel::FlxState target,bool stopMusic,::String directory){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_19_new)
HXLINE(  33)		this->targetShit = ((Float)0);
HXLINE(  30)		this->stopMusic = false;
HXLINE(  37)		super::__construct(null(),null());
HXLINE(  38)		this->target = target;
HXLINE(  39)		this->stopMusic = stopMusic;
HXLINE(  40)		this->directory = directory;
            	}

Dynamic LoadingState_obj::__CreateEmpty() { return new LoadingState_obj; }

void *LoadingState_obj::_hx_vtable = 0;

Dynamic LoadingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadingState_obj > _hx_result = new LoadingState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LoadingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2a8fb4d5) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2a8fb4d5;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void LoadingState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::LoadingState,_gthis) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetLibrary lib){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,introComplete) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer _){
            				HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_86_create)
HXLINE(  86)				introComplete();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_71_create)
HXLINE(  72)			_gthis->callbacks =  ::MultiCallback_obj::__alloc( HX_CTX ,_gthis->onLoad_dyn(),null());
HXLINE(  73)			 ::Dynamic introComplete = _gthis->callbacks->add(HX_("introComplete",45,d3,4c,b2));
HXLINE(  79)			_gthis->checkLibrary(HX_("shared",a5,5e,2b,1d));
HXLINE(  80)			bool _hx_tmp;
HXDLIN(  80)			bool _hx_tmp1;
HXDLIN(  80)			if (::hx::IsNotNull( _gthis->directory )) {
HXLINE(  80)				_hx_tmp1 = (_gthis->directory.length > 0);
            			}
            			else {
HXLINE(  80)				_hx_tmp1 = false;
            			}
HXDLIN(  80)			if (_hx_tmp1) {
HXLINE(  80)				_hx_tmp = (_gthis->directory != HX_("shared",a5,5e,2b,1d));
            			}
            			else {
HXLINE(  80)				_hx_tmp = false;
            			}
HXDLIN(  80)			if (_hx_tmp) {
HXLINE(  81)				_gthis->checkLibrary(_gthis->directory);
            			}
HXLINE(  84)			Float fadeTime = ((Float)0.5);
HXLINE(  85)			::flixel::FlxG_obj::camera->fade(::flixel::FlxG_obj::camera->bgColor,fadeTime,true,null(),null());
HXLINE(  86)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start((fadeTime + ((Float)1.0)), ::Dynamic(new _hx_Closure_0(introComplete)),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_47_create)
HXDLIN(  47)		 ::LoadingState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  48)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-3473587,null(),null());
HXLINE(  49)		this->add(bg);
HXLINE(  51)		this->loadingScreen =  ::LoadingScreen_obj::__alloc( HX_CTX );
HXLINE(  52)		this->add(this->loadingScreen);
HXLINE(  68)		::LoadingState_obj::initSongsManifest()->onComplete( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


void LoadingState_obj::checkLoadSong(::String path){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_93_checkLoadSong)
HXDLIN(  93)		if (!(::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,path))) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::media::Sound _){
            				HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_102_checkLoadSong)
HXLINE( 102)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  95)			 ::lime::utils::AssetLibrary library = ::openfl::utils::Assets_obj::getLibrary(HX_("songs",fe,36,c7,80));
HXLINE(  96)			::String symbolPath = ( (::String)(path.split(HX_(":",3a,00,00,00))->pop()) );
HXLINE( 101)			 ::Dynamic callback = this->callbacks->add((HX_("song:",c5,36,c7,80) + path));
HXLINE( 102)			::openfl::utils::Assets_obj::loadSound(path,null())->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLoadSong,(void))

void LoadingState_obj::checkLibrary(::String library){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_106_checkLibrary)
HXLINE( 107)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 107)		bool _hx_tmp1 = ::openfl::utils::Assets_obj::hasLibrary(library);
HXDLIN( 107)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),107,HX_("LoadingState",15,62,ae,41),HX_("checkLibrary",13,df,f6,2c)));
HXLINE( 108)		if (::hx::IsNull( ::openfl::utils::Assets_obj::getLibrary(library) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::utils::AssetLibrary _){
            				HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_115_checkLibrary)
HXLINE( 115)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 111)			if (!(::lime::utils::Assets_obj::libraryPaths->exists(library))) {
HXLINE( 112)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing library: ",07,45,01,4f) + library)));
            			}
HXLINE( 114)			 ::Dynamic callback = this->callbacks->add((HX_("library:",df,f4,b1,42) + library));
HXLINE( 115)			::openfl::utils::Assets_obj::loadLibrary(library)->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLibrary,(void))

void LoadingState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_120_update)
HXLINE( 121)		this->super::update(elapsed);
HXLINE( 123)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 125)			this->loadingScreen->pulse();
            		}
HXLINE( 128)		if (::hx::IsNotNull( this->callbacks )) {
HXLINE( 129)			this->targetShit = ::flixel::math::FlxMath_obj::remapToRange((( (Float)(this->callbacks->numRemaining) ) / ( (Float)(this->callbacks->length) )),( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ));
HXLINE( 131)			this->loadingScreen->updateProgressTowards(this->targetShit);
            		}
            	}


void LoadingState_obj::onLoad(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_138_onLoad)
HXLINE( 139)		bool _hx_tmp;
HXDLIN( 139)		if (this->stopMusic) {
HXLINE( 139)			_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 139)			_hx_tmp = false;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 140)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 140)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 142)		::MusicBeatState_obj::switchState(this->target);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,onLoad,(void))

void LoadingState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_199_destroy)
HXLINE( 200)		this->super::destroy();
HXLINE( 202)		this->callbacks = null();
            	}


Float LoadingState_obj::MIN_TIME;

 ::Dynamic LoadingState_obj::getSongPath(){
            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_147_getSongPath)
HXDLIN( 147)		::String song = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) );
HXDLIN( 147)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 147)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 147)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 147)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Inst",95,b3,69,40));
HXDLIN( 147)		 ::openfl::media::Sound inst = ::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXDLIN( 147)		return inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getSongPath,return )

 ::Dynamic LoadingState_obj::getVocalPath(){
            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_152_getVocalPath)
HXDLIN( 152)		::String song = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) );
HXDLIN( 152)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 152)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 152)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 152)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Voices",10,18,4f,34));
HXDLIN( 152)		 ::openfl::media::Sound voices = ::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXDLIN( 152)		return voices;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getVocalPath,return )

void LoadingState_obj::loadAndSwitchState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_157_loadAndSwitchState)
HXDLIN( 157)		::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(target,stopMusic));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,loadAndSwitchState,(void))

 ::flixel::FlxState LoadingState_obj::getNextState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_161_getNextState)
HXLINE( 162)		::String directory = HX_("shared",a5,5e,2b,1d);
HXLINE( 163)		::String weekDir = ::StageData_obj::forceNextDirectory;
HXLINE( 164)		::StageData_obj::forceNextDirectory = null();
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		bool _hx_tmp1;
HXDLIN( 166)		if (::hx::IsNotNull( weekDir )) {
HXLINE( 166)			_hx_tmp1 = (weekDir.length > 0);
            		}
            		else {
HXLINE( 166)			_hx_tmp1 = false;
            		}
HXDLIN( 166)		if (_hx_tmp1) {
HXLINE( 166)			_hx_tmp = (weekDir != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 166)			_hx_tmp = false;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 166)			directory = weekDir;
            		}
HXLINE( 168)		::Paths_obj::setCurrentLevel(directory);
HXLINE( 169)		::haxe::Log_obj::trace((HX_("Setting asset folder to ",b3,9c,5c,a5) + directory),::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),169,HX_("LoadingState",15,62,ae,41),HX_("getNextState",a8,2c,a7,3a)));
HXLINE( 180)		bool _hx_tmp2;
HXDLIN( 180)		if (stopMusic) {
HXLINE( 180)			_hx_tmp2 = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 180)			_hx_tmp2 = false;
            		}
HXDLIN( 180)		if (_hx_tmp2) {
HXLINE( 181)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 181)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 183)		return target;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,getNextState,return )

 ::lime::app::Future LoadingState_obj::initSongsManifest(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_243_initSongsManifest)
HXLINE( 244)			if (::hx::IsNull( manifest )) {
HXLINE( 246)				promise->error(((HX_("Cannot parse asset manifest for library \"",cf,1e,cc,48) + id) + HX_("\"",22,00,00,00)));
HXLINE( 247)				return;
            			}
HXLINE( 250)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 252)			if (::hx::IsNull( library )) {
HXLINE( 254)				promise->error(((HX_("Cannot open library \"",44,cc,55,e7) + id) + HX_("\"",22,00,00,00)));
            			}
            			else {
HXLINE( 259)				::lime::utils::Assets_obj::libraries->set(id,library);
HXLINE( 260)				library->onChange->add(::lime::utils::Assets_obj::onChange->dispatch_dyn(),null(),null());
HXLINE( 261)				 ::lime::app::Promise_lime_utils_AssetLibrary promise1 = promise;
HXDLIN( 261)				promise1->completeWith(::lime::app::Future_obj::withValue(library));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_265_initSongsManifest)
HXLINE( 265)			promise->error(((HX_("There is no asset library with an ID of \"",8b,06,e2,9a) + id) + HX_("\"",22,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_206_initSongsManifest)
HXLINE( 207)		::String id = HX_("songs",fe,36,c7,80);
HXLINE( 208)		 ::lime::app::Promise_lime_utils_AssetLibrary promise =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 210)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(id);
HXLINE( 212)		if (::hx::IsNotNull( library )) {
HXLINE( 214)			return ::lime::app::Future_obj::withValue(library);
            		}
HXLINE( 217)		::String path = id;
HXLINE( 218)		::String rootPath = null();
HXLINE( 221)		 ::haxe::ds::StringMap libraryPaths = ::lime::utils::Assets_obj::libraryPaths;
HXLINE( 222)		if (libraryPaths->exists(id)) {
HXLINE( 224)			path = libraryPaths->get_string(id);
HXLINE( 225)			rootPath = ::haxe::io::Path_obj::directory(path);
            		}
            		else {
HXLINE( 229)			if (::StringTools_obj::endsWith(path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 231)				rootPath = path;
HXLINE( 232)				path = (path + HX_("/library.json",2a,a7,07,47));
            			}
            			else {
HXLINE( 236)				rootPath = ::haxe::io::Path_obj::directory(path);
            			}
HXLINE( 239)			path = ::lime::utils::Assets_obj::_hx___cacheBreak(path);
            		}
HXLINE( 242)		::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->onComplete( ::Dynamic(new _hx_Closure_0(id,promise)))->onError( ::Dynamic(new _hx_Closure_1(id,promise)));
HXLINE( 268)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,initSongsManifest,return )


::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__new( ::flixel::FlxState target,bool stopMusic,::String directory) {
	::hx::ObjectPtr< LoadingState_obj > __this = new LoadingState_obj();
	__this->__construct(target,stopMusic,directory);
	return __this;
}

::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxState target,bool stopMusic,::String directory) {
	LoadingState_obj *__this = (LoadingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadingState_obj), true, "LoadingState"));
	*(void **)__this = LoadingState_obj::_hx_vtable;
	__this->__construct(target,stopMusic,directory);
	return __this;
}

LoadingState_obj::LoadingState_obj()
{
}

void LoadingState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadingState);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(stopMusic,"stopMusic");
	HX_MARK_MEMBER_NAME(directory,"directory");
	HX_MARK_MEMBER_NAME(callbacks,"callbacks");
	HX_MARK_MEMBER_NAME(targetShit,"targetShit");
	HX_MARK_MEMBER_NAME(loadingScreen,"loadingScreen");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadingState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(stopMusic,"stopMusic");
	HX_VISIT_MEMBER_NAME(directory,"directory");
	HX_VISIT_MEMBER_NAME(callbacks,"callbacks");
	HX_VISIT_MEMBER_NAME(targetShit,"targetShit");
	HX_VISIT_MEMBER_NAME(loadingScreen,"loadingScreen");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoad") ) { return ::hx::Val( onLoad_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { return ::hx::Val( stopMusic ); }
		if (HX_FIELD_EQ(inName,"directory") ) { return ::hx::Val( directory ); }
		if (HX_FIELD_EQ(inName,"callbacks") ) { return ::hx::Val( callbacks ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { return ::hx::Val( targetShit ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkLibrary") ) { return ::hx::Val( checkLibrary_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadingScreen") ) { return ::hx::Val( loadingScreen ); }
		if (HX_FIELD_EQ(inName,"checkLoadSong") ) { return ::hx::Val( checkLoadSong_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LoadingState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getSongPath") ) { outValue = getSongPath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getVocalPath") ) { outValue = getVocalPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getNextState") ) { outValue = getNextState_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initSongsManifest") ) { outValue = initSongsManifest_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadAndSwitchState") ) { outValue = loadAndSwitchState_dyn(); return true; }
	}
	return false;
}

::hx::Val LoadingState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { stopMusic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"directory") ) { directory=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=inValue.Cast<  ::MultiCallback >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { targetShit=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadingScreen") ) { loadingScreen=inValue.Cast<  ::LoadingScreen >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadingState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("stopMusic",43,09,9d,20));
	outFields->push(HX_("directory",6d,f2,44,10));
	outFields->push(HX_("callbacks",0e,f3,bf,a6));
	outFields->push(HX_("targetShit",b1,6b,83,a6));
	outFields->push(HX_("loadingScreen",08,83,58,30));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadingState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(LoadingState_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsBool,(int)offsetof(LoadingState_obj,stopMusic),HX_("stopMusic",43,09,9d,20)},
	{::hx::fsString,(int)offsetof(LoadingState_obj,directory),HX_("directory",6d,f2,44,10)},
	{::hx::fsObject /*  ::MultiCallback */ ,(int)offsetof(LoadingState_obj,callbacks),HX_("callbacks",0e,f3,bf,a6)},
	{::hx::fsFloat,(int)offsetof(LoadingState_obj,targetShit),HX_("targetShit",b1,6b,83,a6)},
	{::hx::fsObject /*  ::LoadingScreen */ ,(int)offsetof(LoadingState_obj,loadingScreen),HX_("loadingScreen",08,83,58,30)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LoadingState_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &LoadingState_obj::MIN_TIME,HX_("MIN_TIME",3a,05,70,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LoadingState_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("stopMusic",43,09,9d,20),
	HX_("directory",6d,f2,44,10),
	HX_("callbacks",0e,f3,bf,a6),
	HX_("targetShit",b1,6b,83,a6),
	HX_("loadingScreen",08,83,58,30),
	HX_("create",fc,66,0f,7c),
	HX_("checkLoadSong",03,52,52,a5),
	HX_("checkLibrary",13,df,f6,2c),
	HX_("update",09,86,05,87),
	HX_("onLoad",e5,a2,41,ea),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void LoadingState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoadingState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#endif

::hx::Class LoadingState_obj::__mClass;

static ::String LoadingState_obj_sStaticFields[] = {
	HX_("MIN_TIME",3a,05,70,2a),
	HX_("getSongPath",d0,06,1e,5e),
	HX_("getVocalPath",44,23,59,59),
	HX_("loadAndSwitchState",ac,5a,a7,a6),
	HX_("getNextState",a8,2c,a7,3a),
	HX_("initSongsManifest",9d,87,b0,e7),
	::String(null())
};

void LoadingState_obj::__register()
{
	LoadingState_obj _hx_dummy;
	LoadingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LoadingState",15,62,ae,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoadingState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoadingState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LoadingState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadingState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoadingState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LoadingState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_21_boot)
HXDLIN(  21)		MIN_TIME = ((Float)1.0);
            	}
}

