#ifndef INCLUDED_hxcodec_flixel_FlxVideo
#define INCLUDED_hxcodec_flixel_FlxVideo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxcodec_openfl_Video
#include <hxcodec/openfl/Video.h>
#endif
HX_DECLARE_CLASS2(hxcodec,flixel,FlxVideo)
HX_DECLARE_CLASS2(hxcodec,openfl,Video)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace hxcodec{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxVideo_obj : public  ::hxcodec::openfl::Video_obj
{
	public:
		typedef  ::hxcodec::openfl::Video_obj super;
		typedef FlxVideo_obj OBJ_;
		FlxVideo_obj();

	public:
		enum { _hx_ClassId = 0x7546c1eb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcodec.flixel.FlxVideo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcodec.flixel.FlxVideo"); }
		static ::hx::ObjectPtr< FlxVideo_obj > __new();
		static ::hx::ObjectPtr< FlxVideo_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxVideo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxVideo",c9,1e,d6,f3); }

		bool autoResize;
		int play(::String location,::hx::Null< bool >  shouldLoop);

		void dispose();

		void onEnterFrame( ::openfl::events::Event e);
		::Dynamic onEnterFrame_dyn();

};

} // end namespace hxcodec
} // end namespace flixel

#endif /* INCLUDED_hxcodec_flixel_FlxVideo */ 
