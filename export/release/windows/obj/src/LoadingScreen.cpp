#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_LoadingScreen
#include <LoadingScreen.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_63608349210c4a3d_10_new,"LoadingScreen","new",0x15cc07da,"LoadingScreen.new","LoadingScreen.hx",10,0x4d0330d6)
HX_LOCAL_STACK_FRAME(_hx_pos_63608349210c4a3d_44_setProgress,"LoadingScreen","setProgress",0x689f02e9,"LoadingScreen.setProgress","LoadingScreen.hx",44,0x4d0330d6)
HX_LOCAL_STACK_FRAME(_hx_pos_63608349210c4a3d_52_updateProgressTowards,"LoadingScreen","updateProgressTowards",0xda80f120,"LoadingScreen.updateProgressTowards","LoadingScreen.hx",52,0x4d0330d6)
HX_LOCAL_STACK_FRAME(_hx_pos_63608349210c4a3d_64_pulse,"LoadingScreen","pulse",0x5819d113,"LoadingScreen.pulse","LoadingScreen.hx",64,0x4d0330d6)
HX_LOCAL_STACK_FRAME(_hx_pos_63608349210c4a3d_61_pulse,"LoadingScreen","pulse",0x5819d113,"LoadingScreen.pulse","LoadingScreen.hx",61,0x4d0330d6)

void LoadingScreen_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_63608349210c4a3d_10_new)
HXLINE(  15)		this->progress = ((Float)0);
HXLINE(  19)		super::__construct(null());
HXLINE(  22)		this->loadingText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.42)),::flixel::FlxG_obj::width,HX_("LOADING...",12,4f,7d,08),null(),null());
HXLINE(  23)		this->loadingText->setFormat(null(),48,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  24)		this->loadingText->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  25)		this->add(this->loadingText);
HXLINE(  28)		int barW = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6)));
HXLINE(  29)		int barX = ::Std_obj::_hx_int((( (Float)((::flixel::FlxG_obj::width - barW)) ) / ( (Float)(2) )));
HXLINE(  30)		int barY = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.55)));
HXLINE(  32)		this->barBg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,barX,barY,null())->makeGraphic(barW,14,-12303292,null(),null());
HXLINE(  33)		this->barBg->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  34)		this->add(this->barBg);
HXLINE(  37)		this->barFill =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,barX,(barY + 2),null())->makeGraphic(barW,10,-59694,null(),null());
HXLINE(  38)		this->barFill->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  39)		this->barFill->scale->set_x(( (Float)(0) ));
HXLINE(  40)		this->add(this->barFill);
            	}

Dynamic LoadingScreen_obj::__CreateEmpty() { return new LoadingScreen_obj; }

void *LoadingScreen_obj::_hx_vtable = 0;

Dynamic LoadingScreen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadingScreen_obj > _hx_result = new LoadingScreen_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LoadingScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x548fe828) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x548fe828;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void LoadingScreen_obj::setProgress(Float p){
            	HX_STACKFRAME(&_hx_pos_63608349210c4a3d_44_setProgress)
HXLINE(  46)		this->progress = ::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),p));
HXLINE(  47)		this->barFill->scale->set_x(this->progress);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingScreen_obj,setProgress,(void))

void LoadingScreen_obj::updateProgressTowards(Float target){
            	HX_STACKFRAME(&_hx_pos_63608349210c4a3d_52_updateProgressTowards)
HXLINE(  53)		Float targetClamped = ::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),target));
HXLINE(  55)		 ::LoadingScreen _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  55)		_hx_tmp->progress = (_hx_tmp->progress + (((Float)0.5) * (targetClamped - this->progress)));
HXLINE(  56)		this->barFill->scale->set_x(this->progress);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingScreen_obj,updateProgressTowards,(void))

void LoadingScreen_obj::pulse(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::LoadingScreen,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer _){
            			HX_GC_STACKFRAME(&_hx_pos_63608349210c4a3d_64_pulse)
HXLINE(  64)			 ::flixel::math::FlxBasePoint this1 = _gthis->loadingText->scale;
HXDLIN(  64)			this1->set_x(( (Float)(1) ));
HXDLIN(  64)			this1->set_y(( (Float)(1) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_63608349210c4a3d_61_pulse)
HXDLIN(  61)		 ::LoadingScreen _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  62)		{
HXLINE(  62)			 ::flixel::math::FlxBasePoint this1 = this->loadingText->scale;
HXDLIN(  62)			this1->set_x(((Float)1.08));
HXDLIN(  62)			this1->set_y(((Float)1.08));
            		}
HXLINE(  63)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.12), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(LoadingScreen_obj,pulse,(void))


::hx::ObjectPtr< LoadingScreen_obj > LoadingScreen_obj::__new() {
	::hx::ObjectPtr< LoadingScreen_obj > __this = new LoadingScreen_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LoadingScreen_obj > LoadingScreen_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LoadingScreen_obj *__this = (LoadingScreen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadingScreen_obj), true, "LoadingScreen"));
	*(void **)__this = LoadingScreen_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LoadingScreen_obj::LoadingScreen_obj()
{
}

void LoadingScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadingScreen);
	HX_MARK_MEMBER_NAME(loadingText,"loadingText");
	HX_MARK_MEMBER_NAME(barBg,"barBg");
	HX_MARK_MEMBER_NAME(barFill,"barFill");
	HX_MARK_MEMBER_NAME(progress,"progress");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadingScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loadingText,"loadingText");
	HX_VISIT_MEMBER_NAME(barBg,"barBg");
	HX_VISIT_MEMBER_NAME(barFill,"barFill");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadingScreen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"barBg") ) { return ::hx::Val( barBg ); }
		if (HX_FIELD_EQ(inName,"pulse") ) { return ::hx::Val( pulse_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barFill") ) { return ::hx::Val( barFill ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadingText") ) { return ::hx::Val( loadingText ); }
		if (HX_FIELD_EQ(inName,"setProgress") ) { return ::hx::Val( setProgress_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateProgressTowards") ) { return ::hx::Val( updateProgressTowards_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LoadingScreen_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"barBg") ) { barBg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barFill") ) { barFill=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadingText") ) { loadingText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadingScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("loadingText",49,b5,f4,92));
	outFields->push(HX_("barBg",78,46,b9,ad));
	outFields->push(HX_("barFill",f6,91,18,86));
	outFields->push(HX_("progress",ad,f7,2a,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadingScreen_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LoadingScreen_obj,loadingText),HX_("loadingText",49,b5,f4,92)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingScreen_obj,barBg),HX_("barBg",78,46,b9,ad)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingScreen_obj,barFill),HX_("barFill",f6,91,18,86)},
	{::hx::fsFloat,(int)offsetof(LoadingScreen_obj,progress),HX_("progress",ad,f7,2a,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LoadingScreen_obj_sStaticStorageInfo = 0;
#endif

static ::String LoadingScreen_obj_sMemberFields[] = {
	HX_("loadingText",49,b5,f4,92),
	HX_("barBg",78,46,b9,ad),
	HX_("barFill",f6,91,18,86),
	HX_("progress",ad,f7,2a,86),
	HX_("setProgress",6f,c1,8b,b6),
	HX_("updateProgressTowards",26,53,73,cf),
	HX_("pulse",19,47,89,ca),
	::String(null()) };

::hx::Class LoadingScreen_obj::__mClass;

void LoadingScreen_obj::__register()
{
	LoadingScreen_obj _hx_dummy;
	LoadingScreen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LoadingScreen",e8,d2,48,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadingScreen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadingScreen_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadingScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadingScreen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

