#ifndef INCLUDED_hxcodec_openfl_Video
#define INCLUDED_hxcodec_openfl_Video

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_f6e4a6bd16e728f7
#define INCLUDED_f6e4a6bd16e728f7
#include "vlc/vlc.h"
#endif
HX_DECLARE_CLASS2(hxcodec,openfl,Video)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

#include "stdint.h"
namespace hxcodec{
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES Video_obj : public  ::openfl::display::Bitmap_obj
{
	public:
		typedef  ::openfl::display::Bitmap_obj super;
		typedef Video_obj OBJ_;
		Video_obj();

	public:
		enum { _hx_ClassId = 0x3526b1a9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcodec.openfl.Video")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcodec.openfl.Video"); }
		static ::hx::ObjectPtr< Video_obj > __new();
		static ::hx::ObjectPtr< Video_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Video_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Video",5b,84,29,ca); }

		int videoWidth;
		int videoHeight;
		 ::lime::app::_Event_Void_Void onOpening;
		 ::lime::app::_Event_Void_Void onPlaying;
		 ::lime::app::_Event_Void_Void onStopped;
		 ::lime::app::_Event_Void_Void onPaused;
		 ::lime::app::_Event_Void_Void onEndReached;
		 ::lime::app::_Event_Void_Void onEncounteredError;
		 ::lime::app::_Event_Void_Void onForward;
		 ::lime::app::_Event_Void_Void onBackward;
		 ::lime::app::_Event_Void_Void onMediaChanged;
		 ::lime::app::_Event_Void_Void onTextureSetup;
		Float oldTime;
		Float deltaTime;
		::Array< bool > events;
		 ::openfl::display3D::textures::RectangleTexture texture;
		unsigned char* pixels;
		 libvlc_instance_t* instance;
		 libvlc_media_player_t* mediaPlayer;
		 libvlc_media_t* mediaItem;
		 libvlc_event_manager_t* eventManager;
		virtual int play(::String location,::hx::Null< bool >  shouldLoop);
		::Dynamic play_dyn();

		void stop();
		::Dynamic stop_dyn();

		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		void togglePaused();
		::Dynamic togglePaused_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		int get_time();
		::Dynamic get_time_dyn();

		int set_time(int value);
		::Dynamic set_time_dyn();

		float get_position();
		::Dynamic get_position_dyn();

		float set_position(float value);
		::Dynamic set_position_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int get_duration();
		::Dynamic get_duration_dyn();

		::String get_mrl();
		::Dynamic get_mrl_dyn();

		int get_volume();
		::Dynamic get_volume_dyn();

		int set_volume(int value);
		::Dynamic set_volume_dyn();

		int get_channel();
		::Dynamic get_channel_dyn();

		int set_channel(int value);
		::Dynamic set_channel_dyn();

		int get_delay();
		::Dynamic get_delay_dyn();

		int set_delay(int value);
		::Dynamic set_delay_dyn();

		float get_rate();
		::Dynamic get_rate_dyn();

		float set_rate(float value);
		::Dynamic set_rate_dyn();

		bool get_isPlaying();
		::Dynamic get_isPlaying_dyn();

		bool get_isSeekable();
		::Dynamic get_isSeekable_dyn();

		bool get_canPause();
		::Dynamic get_canPause_dyn();

		bool get_mute();
		::Dynamic get_mute_dyn();

		bool set_mute(bool value);
		::Dynamic set_mute_dyn();

		void _hx___enterFrame(int elapsed);

		void checkEvents();
		::Dynamic checkEvents_dyn();

		void attachEvents();
		::Dynamic attachEvents_dyn();

		void detachEvents();
		::Dynamic detachEvents_dyn();

};

} // end namespace hxcodec
} // end namespace openfl

#endif /* INCLUDED_hxcodec_openfl_Video */ 
