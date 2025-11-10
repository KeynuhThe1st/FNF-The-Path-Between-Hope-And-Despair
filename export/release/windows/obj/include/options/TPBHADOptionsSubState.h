#ifndef INCLUDED_options_TPBHADOptionsSubState
#define INCLUDED_options_TPBHADOptionsSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(options,BaseOptionsMenu)
HX_DECLARE_CLASS1(options,TPBHADOptionsSubState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES TPBHADOptionsSubState_obj : public  ::options::BaseOptionsMenu_obj
{
	public:
		typedef  ::options::BaseOptionsMenu_obj super;
		typedef TPBHADOptionsSubState_obj OBJ_;
		TPBHADOptionsSubState_obj();

	public:
		enum { _hx_ClassId = 0x784eec90 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.TPBHADOptionsSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.TPBHADOptionsSubState"); }
		static ::hx::ObjectPtr< TPBHADOptionsSubState_obj > __new();
		static ::hx::ObjectPtr< TPBHADOptionsSubState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TPBHADOptionsSubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TPBHADOptionsSubState",ca,0b,d5,bb); }

		void update(Float elapsed);

};

} // end namespace options

#endif /* INCLUDED_options_TPBHADOptionsSubState */ 
