#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif
#ifndef INCLUDED_options_TPBHADOptionsSubState
#include <options/TPBHADOptionsSubState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_10e63217acfe66bb_35_new,"options.TPBHADOptionsSubState","new",0x5cfd18ac,"options.TPBHADOptionsSubState.new","options/TPBHADOptionsSubState.hx",35,0xd93adb45)
HX_LOCAL_STACK_FRAME(_hx_pos_10e63217acfe66bb_56_update,"options.TPBHADOptionsSubState","update",0x8395753d,"options.TPBHADOptionsSubState.update","options/TPBHADOptionsSubState.hx",56,0xd93adb45)
namespace options{

void TPBHADOptionsSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_10e63217acfe66bb_35_new)
HXLINE(  36)		this->title = HX_("The Path Between Hope And Despair",43,9a,00,07);
HXLINE(  37)		this->rpcTitle = HX_("TPBHAD Settings Menu",41,88,87,be);
HXLINE(  39)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("PIBBY APOCALYPSE SHAKE!?",7b,92,7e,95),HX_("Inspired by Pibby Apocalypse. Will shake screen when enabled",83,6e,8d,b4),HX_("coolCamShake",20,ac,a0,09),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  44)		this->addOption(option);
HXLINE(  46)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Auto-Pause",58,24,7c,7c),HX_("If unchecked, the game will not pause when you tab away.",13,73,4b,a3),HX_("autoPause",07,15,63,9b),HX_("bool",2a,84,1b,41),null(),null());
HXLINE(  50)		this->addOption(option1);
HXLINE(  52)		super::__construct();
            	}

Dynamic TPBHADOptionsSubState_obj::__CreateEmpty() { return new TPBHADOptionsSubState_obj; }

void *TPBHADOptionsSubState_obj::_hx_vtable = 0;

Dynamic TPBHADOptionsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TPBHADOptionsSubState_obj > _hx_result = new TPBHADOptionsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TPBHADOptionsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x784eec90) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x784eec90;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void TPBHADOptionsSubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_10e63217acfe66bb_56_update)
HXLINE(  57)		this->super::update(elapsed);
HXLINE(  59)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  61)			this->close();
            		}
            	}



::hx::ObjectPtr< TPBHADOptionsSubState_obj > TPBHADOptionsSubState_obj::__new() {
	::hx::ObjectPtr< TPBHADOptionsSubState_obj > __this = new TPBHADOptionsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TPBHADOptionsSubState_obj > TPBHADOptionsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TPBHADOptionsSubState_obj *__this = (TPBHADOptionsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TPBHADOptionsSubState_obj), true, "options.TPBHADOptionsSubState"));
	*(void **)__this = TPBHADOptionsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TPBHADOptionsSubState_obj::TPBHADOptionsSubState_obj()
{
}

::hx::Val TPBHADOptionsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TPBHADOptionsSubState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TPBHADOptionsSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String TPBHADOptionsSubState_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class TPBHADOptionsSubState_obj::__mClass;

void TPBHADOptionsSubState_obj::__register()
{
	TPBHADOptionsSubState_obj _hx_dummy;
	TPBHADOptionsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.TPBHADOptionsSubState",ba,92,08,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TPBHADOptionsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TPBHADOptionsSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TPBHADOptionsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TPBHADOptionsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
