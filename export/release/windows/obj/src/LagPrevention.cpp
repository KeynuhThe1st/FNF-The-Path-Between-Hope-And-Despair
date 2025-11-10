#include <hxcpp.h>

#ifndef INCLUDED_LagPrevention
#include <LagPrevention.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ba3952342875b666_37_init,"LagPrevention","init",0x937b6e3c,"LagPrevention.init","LagPrevention.hx",37,0x494b2b3c)
HX_LOCAL_STACK_FRAME(_hx_pos_ba3952342875b666_22_init,"LagPrevention","init",0x937b6e3c,"LagPrevention.init","LagPrevention.hx",22,0x494b2b3c)
HX_LOCAL_STACK_FRAME(_hx_pos_ba3952342875b666_42_checkPerformance,"LagPrevention","checkPerformance",0x909db734,"LagPrevention.checkPerformance","LagPrevention.hx",42,0x494b2b3c)
HX_LOCAL_STACK_FRAME(_hx_pos_ba3952342875b666_58_safeLoop,"LagPrevention","safeLoop",0x88b2b37d,"LagPrevention.safeLoop","LagPrevention.hx",58,0x494b2b3c)
HX_LOCAL_STACK_FRAME(_hx_pos_ba3952342875b666_54_safeLoop,"LagPrevention","safeLoop",0x88b2b37d,"LagPrevention.safeLoop","LagPrevention.hx",54,0x494b2b3c)
static const int _hx_array_data_3fd8fcc2_5[] = {
	(int)0,
};

void LagPrevention_obj::__construct() { }

Dynamic LagPrevention_obj::__CreateEmpty() { return new LagPrevention_obj; }

void *LagPrevention_obj::_hx_vtable = 0;

Dynamic LagPrevention_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LagPrevention_obj > _hx_result = new LagPrevention_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LagPrevention_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c201202;
}

void LagPrevention_obj::init(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_ba3952342875b666_37_init)
HXLINE(  37)			::LagPrevention_obj::checkPerformance();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_ba3952342875b666_22_init)
HXLINE(  23)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  25)			bool _hx_tmp;
HXDLIN(  25)			if (::hx::IsNotNull( ::openfl::Lib_obj::get_current() )) {
HXLINE(  25)				_hx_tmp = ::hx::IsNotNull( ::openfl::Lib_obj::get_current()->stage );
            			}
            			else {
HXLINE(  25)				_hx_tmp = false;
            			}
HXDLIN(  25)			if (_hx_tmp) {
HXLINE(  27)				::openfl::Lib_obj::get_current()->stage->set_frameRate(( (Float)(60) ));
HXLINE(  28)				::haxe::Log_obj::trace(HX_("[LagPrevention] Frame rate capped to 60 FPS",c8,4c,0d,8d),::hx::SourceInfo(HX_("source/LagPrevention.hx",30,62,74,0a),28,HX_("LagPrevention",c2,fc,d8,3f),HX_("init",10,3b,bb,45)));
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  31)				{
HXLINE(  31)					null();
            				}
HXDLIN(  31)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  33)				{
HXLINE(  33)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  33)					::String _hx_tmp1 = (HX_("[LagPrevention] Could not set frame rate: ",8d,1e,31,5e) + ::Std_obj::string(e));
HXDLIN(  33)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/LagPrevention.hx",30,62,74,0a),33,HX_("LagPrevention",c2,fc,d8,3f),HX_("init",10,3b,bb,45)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  37)		::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0()),3000);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LagPrevention_obj,init,(void))

void LagPrevention_obj::checkPerformance(){
            	HX_STACKFRAME(&_hx_pos_ba3952342875b666_42_checkPerformance)
HXLINE(  44)		Float mem = ::Sys_obj::cpuTime();
HXLINE(  45)		if ((mem > 10)) {
HXLINE(  47)			::haxe::Log_obj::trace(((HX_("[LagPrevention] Warning: High CPU usage detected (",e7,c0,f9,3d) + mem) + HX_("s)",56,64,00,00)),::hx::SourceInfo(HX_("source/LagPrevention.hx",30,62,74,0a),47,HX_("LagPrevention",c2,fc,d8,3f),HX_("checkPerformance",08,72,c7,4c)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LagPrevention_obj,checkPerformance,(void))

void LagPrevention_obj::safeLoop( ::Dynamic task,::hx::Null< int >  __o_repeat,::hx::Null< int >  __o_delayMS){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::haxe::Timer,t,int,repeat, ::Dynamic,task,::Array< int >,count) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_ba3952342875b666_58_safeLoop)
HXLINE(  59)			task();
HXLINE(  60)			count[0]++;
HXLINE(  61)			if ((count->__get(0) >= repeat)) {
HXLINE(  62)				t->stop();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		int repeat = __o_repeat.Default(1);
            		int delayMS = __o_delayMS.Default(16);
            	HX_GC_STACKFRAME(&_hx_pos_ba3952342875b666_54_safeLoop)
HXLINE(  55)		::Array< int > count = ::Array_obj< int >::fromData( _hx_array_data_3fd8fcc2_5,1);
HXLINE(  56)		 ::haxe::Timer t =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(delayMS) ));
HXLINE(  57)		t->run =  ::Dynamic(new _hx_Closure_0(t,repeat,task,count));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LagPrevention_obj,safeLoop,(void))


LagPrevention_obj::LagPrevention_obj()
{
}

bool LagPrevention_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"safeLoop") ) { outValue = safeLoop_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkPerformance") ) { outValue = checkPerformance_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LagPrevention_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LagPrevention_obj_sStaticStorageInfo = 0;
#endif

::hx::Class LagPrevention_obj::__mClass;

static ::String LagPrevention_obj_sStaticFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("checkPerformance",08,72,c7,4c),
	HX_("safeLoop",51,7a,bb,95),
	::String(null())
};

void LagPrevention_obj::__register()
{
	LagPrevention_obj _hx_dummy;
	LagPrevention_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LagPrevention",c2,fc,d8,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LagPrevention_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LagPrevention_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LagPrevention_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LagPrevention_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LagPrevention_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

