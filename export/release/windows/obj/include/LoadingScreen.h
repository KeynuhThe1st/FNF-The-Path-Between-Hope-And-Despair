#ifndef INCLUDED_LoadingScreen
#define INCLUDED_LoadingScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS0(LoadingScreen)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES LoadingScreen_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef LoadingScreen_obj OBJ_;
		LoadingScreen_obj();

	public:
		enum { _hx_ClassId = 0x548fe828 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LoadingScreen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LoadingScreen"); }
		static ::hx::ObjectPtr< LoadingScreen_obj > __new();
		static ::hx::ObjectPtr< LoadingScreen_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LoadingScreen_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LoadingScreen",e8,d2,48,78); }

		 ::flixel::text::FlxText loadingText;
		 ::flixel::FlxSprite barBg;
		 ::flixel::FlxSprite barFill;
		Float progress;
		void setProgress(Float p);
		::Dynamic setProgress_dyn();

		void updateProgressTowards(Float target);
		::Dynamic updateProgressTowards_dyn();

		void pulse();
		::Dynamic pulse_dyn();

};


#endif /* INCLUDED_LoadingScreen */ 
