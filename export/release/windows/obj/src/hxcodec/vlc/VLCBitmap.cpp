#include <hxcpp.h>

#ifndef INCLUDED_f6e4a6bd16e728f7
#define INCLUDED_f6e4a6bd16e728f7
#include "vlc/vlc.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxcodec_vlc_VLCBitmap
#include <hxcodec/vlc/VLCBitmap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
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
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3158faa035054fd5_106_new,"hxcodec.vlc.VLCBitmap","new",0x6e892e65,"hxcodec.vlc.VLCBitmap.new","hxcodec/vlc/VLCBitmap.hx",106,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_168_play,"hxcodec.vlc.VLCBitmap","play",0x4ad7144f,"hxcodec.vlc.VLCBitmap.play","hxcodec/vlc/VLCBitmap.hx",168,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_223_stop,"hxcodec.vlc.VLCBitmap","stop",0x4cd8d65d,"hxcodec.vlc.VLCBitmap.stop","hxcodec/vlc/VLCBitmap.hx",223,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_229_pause,"hxcodec.vlc.VLCBitmap","pause",0x2a24803b,"hxcodec.vlc.VLCBitmap.pause","hxcodec/vlc/VLCBitmap.hx",229,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_235_resume,"hxcodec.vlc.VLCBitmap","resume",0xcecbdcc8,"hxcodec.vlc.VLCBitmap.resume","hxcodec/vlc/VLCBitmap.hx",235,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_240_dispose,"hxcodec.vlc.VLCBitmap","dispose",0x7389c524,"hxcodec.vlc.VLCBitmap.dispose","hxcodec/vlc/VLCBitmap.hx",240,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_284_onAddedToStage,"hxcodec.vlc.VLCBitmap","onAddedToStage",0xcd2d083d,"hxcodec.vlc.VLCBitmap.onAddedToStage","hxcodec/vlc/VLCBitmap.hx",284,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_293_onEnterFrame,"hxcodec.vlc.VLCBitmap","onEnterFrame",0x9736df4f,"hxcodec.vlc.VLCBitmap.onEnterFrame","hxcodec/vlc/VLCBitmap.hx",293,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_305_checkFlags,"hxcodec.vlc.VLCBitmap","checkFlags",0xa8cac9fa,"hxcodec.vlc.VLCBitmap.checkFlags","hxcodec/vlc/VLCBitmap.hx",305,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_364_render,"hxcodec.vlc.VLCBitmap","render",0xcb70de71,"hxcodec.vlc.VLCBitmap.render","hxcodec/vlc/VLCBitmap.hx",364,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_406_get_time,"hxcodec.vlc.VLCBitmap","get_time",0x4a163771,"hxcodec.vlc.VLCBitmap.get_time","hxcodec/vlc/VLCBitmap.hx",406,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_414_set_time,"hxcodec.vlc.VLCBitmap","set_time",0xf87390e5,"hxcodec.vlc.VLCBitmap.set_time","hxcodec/vlc/VLCBitmap.hx",414,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_422_get_position,"hxcodec.vlc.VLCBitmap","get_position",0x3cb78e0d,"hxcodec.vlc.VLCBitmap.get_position","hxcodec/vlc/VLCBitmap.hx",422,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_430_set_position,"hxcodec.vlc.VLCBitmap","set_position",0x51b0b181,"hxcodec.vlc.VLCBitmap.set_position","hxcodec/vlc/VLCBitmap.hx",430,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_438_get_length,"hxcodec.vlc.VLCBitmap","get_length",0x25dda14a,"hxcodec.vlc.VLCBitmap.get_length","hxcodec/vlc/VLCBitmap.hx",438,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_446_get_duration,"hxcodec.vlc.VLCBitmap","get_duration",0x864afcb8,"hxcodec.vlc.VLCBitmap.get_duration","hxcodec/vlc/VLCBitmap.hx",446,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_454_get_mrl,"hxcodec.vlc.VLCBitmap","get_mrl",0xdf052683,"hxcodec.vlc.VLCBitmap.get_mrl","hxcodec/vlc/VLCBitmap.hx",454,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_462_get_volume,"hxcodec.vlc.VLCBitmap","get_volume",0xe629363e,"hxcodec.vlc.VLCBitmap.get_volume","hxcodec/vlc/VLCBitmap.hx",462,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_470_set_volume,"hxcodec.vlc.VLCBitmap","set_volume",0xe9a6d4b2,"hxcodec.vlc.VLCBitmap.set_volume","hxcodec/vlc/VLCBitmap.hx",470,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_478_get_delay,"hxcodec.vlc.VLCBitmap","get_delay",0x504b639f,"hxcodec.vlc.VLCBitmap.get_delay","hxcodec/vlc/VLCBitmap.hx",478,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_486_set_delay,"hxcodec.vlc.VLCBitmap","set_delay",0x339c4fab,"hxcodec.vlc.VLCBitmap.set_delay","hxcodec/vlc/VLCBitmap.hx",486,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_494_get_rate,"hxcodec.vlc.VLCBitmap","get_rate",0x48bdbe44,"hxcodec.vlc.VLCBitmap.get_rate","hxcodec/vlc/VLCBitmap.hx",494,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_502_set_rate,"hxcodec.vlc.VLCBitmap","set_rate",0xf71b17b8,"hxcodec.vlc.VLCBitmap.set_rate","hxcodec/vlc/VLCBitmap.hx",502,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_510_get_fps,"hxcodec.vlc.VLCBitmap","get_fps",0xdeffd505,"hxcodec.vlc.VLCBitmap.get_fps","hxcodec/vlc/VLCBitmap.hx",510,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_518_get_isPlaying,"hxcodec.vlc.VLCBitmap","get_isPlaying",0xa1a956c0,"hxcodec.vlc.VLCBitmap.get_isPlaying","hxcodec/vlc/VLCBitmap.hx",518,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_526_get_isSeekable,"hxcodec.vlc.VLCBitmap","get_isSeekable",0xdf822f80,"hxcodec.vlc.VLCBitmap.get_isSeekable","hxcodec/vlc/VLCBitmap.hx",526,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_534_get_canPause,"hxcodec.vlc.VLCBitmap","get_canPause",0x9da8062a,"hxcodec.vlc.VLCBitmap.get_canPause","hxcodec/vlc/VLCBitmap.hx",534,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_542_set_height,"hxcodec.vlc.VLCBitmap","set_height",0x8c9fb2bf,"hxcodec.vlc.VLCBitmap.set_height","hxcodec/vlc/VLCBitmap.hx",542,0xff27b42d)
HX_LOCAL_STACK_FRAME(_hx_pos_3158faa035054fd5_554_set_width,"hxcodec.vlc.VLCBitmap","set_width",0x26d82e2e,"hxcodec.vlc.VLCBitmap.set_width","hxcodec/vlc/VLCBitmap.hx",554,0xff27b42d)
namespace hxcodec{
namespace vlc{


static unsigned format_setup(void **data, char *chroma, unsigned *width, unsigned *height, unsigned *pitches, unsigned *lines)
{
	VLCBitmap_obj *self = (VLCBitmap_obj*)(*data);

	unsigned _w = (*width);
	unsigned _h = (*height);
	unsigned _pitch = _w * 4;
	unsigned _frame = _w *_h * 4;

	(*pitches) = _pitch;
	(*lines) = _h;

	memcpy(chroma, "RV32", 4);

	self->videoWidth = _w;
	self->videoHeight = _h;

	if (self->pixels != NULL || self->pixels != nullptr)
		delete self->pixels;

	self->pixels = new unsigned char[_frame];
	return 1;
}

static void format_cleanup(void *data)
{
	VLCBitmap_obj *self = (VLCBitmap_obj*) data;
}

static void *lock(void *data, void **p_pixels)
{
	VLCBitmap_obj *self = (VLCBitmap_obj*) data;
	*p_pixels = self->pixels;
	return NULL;
}

static void unlock(void *data, void *id, void *const *p_pixels)
{
	VLCBitmap_obj *self = (VLCBitmap_obj*) data;
}

static void display(void *data, void *picture)
{
	VLCBitmap_obj *self = (VLCBitmap_obj*) data;
	self->isDisplaying = true;
}

static void callbacks(const libvlc_event_t *event, void *data)
{
	VLCBitmap_obj *self = (VLCBitmap_obj*) data;

	switch (event->type)
	{
		case libvlc_MediaPlayerOpening:
			self->flags[0] = true;
			break;
		case libvlc_MediaPlayerPlaying:
			self->flags[1] = true;
			break;
		case libvlc_MediaPlayerPaused:
			self->flags[2] = true;
			break;
		case libvlc_MediaPlayerStopped:
			self->flags[3] = true;
			break;
		case libvlc_MediaPlayerEndReached:
			self->flags[4] = true;
			break;
		case libvlc_MediaPlayerEncounteredError:
			self->flags[5] = true;
			break;
		case libvlc_MediaPlayerForward:
			self->flags[6] = true;
			break;
		case libvlc_MediaPlayerBackward:
			self->flags[7] = true;
			break;
	}
}
void VLCBitmap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_106_new)
HXLINE( 291)		this->currentTime = ((Float)0);
HXLINE( 138)		this->flags = ::Array_obj< bool >::__new(0);
HXLINE( 112)		this->isDisplaying = false;
HXLINE( 111)		this->videoHeight = 0;
HXLINE( 110)		this->videoWidth = 0;
HXLINE( 109)		this->skipStepLimit = ((Float)0);
HXLINE( 152)		super::__construct(this->get_bitmapData(),1,true);
HXLINE( 154)		{
HXLINE( 155)			this->flags[0] = false;
HXDLIN( 155)			this->flags[1] = false;
HXDLIN( 155)			this->flags[2] = false;
HXDLIN( 155)			this->flags[3] = false;
HXDLIN( 155)			this->flags[4] = false;
HXDLIN( 155)			this->flags[5] = false;
HXDLIN( 155)			this->flags[6] = false;
            		}
HXLINE( 157)		this->instance = libvlc_new(0,null());
HXLINE( 158)		this->audioOutput = libvlc_audio_output_list_get(this->instance);
HXLINE( 160)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 161)			this->onAddedToStage(null());
            		}
            		else {
HXLINE( 163)			this->addEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null(),null(),null());
            		}
            	}

Dynamic VLCBitmap_obj::__CreateEmpty() { return new VLCBitmap_obj; }

void *VLCBitmap_obj::_hx_vtable = 0;

Dynamic VLCBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VLCBitmap_obj > _hx_result = new VLCBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VLCBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x317b3ab1) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x317b3ab1;
		}
	} else {
		return inClassId==(int)0x4cc42801 || inClassId==(int)0x6b353933;
	}
}

void VLCBitmap_obj::play(::String location,::hx::Null< bool >  __o_loop){
            		bool loop = __o_loop.Default(false);
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_168_play)
HXLINE( 169)		::String path = ::haxe::io::Path_obj::normalize(location).split(HX_("/",2f,00,00,00))->join(HX_("\\",5c,00,00,00));
HXLINE( 175)		this->mediaItem = libvlc_media_new_path(this->instance,path);
HXLINE( 176)		this->mediaPlayer = libvlc_media_player_new_from_media(this->mediaItem);
HXLINE( 178)		libvlc_media_parse(this->mediaItem);
HXLINE( 180)		if (loop) {
HXLINE( 181)			libvlc_media_add_option(this->mediaItem,HX_("input-repeat=-1",23,ab,d2,be));
            		}
            		else {
HXLINE( 183)			libvlc_media_add_option(this->mediaItem,HX_("input-repeat=0",51,79,b7,c1));
            		}
HXLINE( 185)		libvlc_media_release(this->mediaItem);
HXLINE( 187)		if (::hx::IsNotNull( this->texture )) {
HXLINE( 189)			this->texture->dispose();
HXLINE( 190)			this->texture = null();
            		}
HXLINE( 193)		if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 195)			this->get_bitmapData()->dispose();
HXLINE( 196)			this->set_bitmapData(null());
            		}
HXLINE( 199)		bool _hx_tmp;
HXDLIN( 199)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 199)			if (::hx::IsNotNull( this->buffer )) {
HXLINE( 199)				_hx_tmp = (this->buffer->length > 0);
            			}
            			else {
HXLINE( 199)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 199)			_hx_tmp = true;
            		}
HXDLIN( 199)		if (_hx_tmp) {
HXLINE( 200)			this->buffer = ::Array_obj< unsigned char >::__new(0);
            		}
HXLINE( 202)		this->isDisplaying = false;
HXLINE( 204)		 libvlc_media_player_t* _hx_tmp1 = this->mediaPlayer;
HXDLIN( 204)		::cpp::Function< unsigned int  (void * *,char *,unsigned int *,unsigned int *,unsigned int *,unsigned int *) > _hx_tmp2 = format_setup;
HXDLIN( 204)		libvlc_video_set_format_callbacks(_hx_tmp1,_hx_tmp2,format_cleanup);
HXLINE( 205)		 libvlc_media_player_t* _hx_tmp3 = this->mediaPlayer;
HXDLIN( 205)		::cpp::Function< void *  (void *,void * *) > _hx_tmp4 = lock;
HXDLIN( 205)		::cpp::Function< void  (void *,void *, void *const *) > _hx_tmp5 = unlock;
HXDLIN( 205)		::cpp::Function< void  (void *,void *) > _hx_tmp6 = display;
HXDLIN( 205)		libvlc_video_set_callbacks(_hx_tmp3,_hx_tmp4,_hx_tmp5,_hx_tmp6,this);
HXLINE( 207)		this->eventManager = libvlc_media_player_event_manager(this->mediaPlayer);
HXLINE( 209)		 libvlc_event_manager_t* _hx_tmp7 = this->eventManager;
HXDLIN( 209)		::cpp::Function< void  (const  libvlc_event_t*,void *) > _hx_tmp8 = callbacks;
HXDLIN( 209)		libvlc_event_attach(_hx_tmp7,258,_hx_tmp8,this);
HXLINE( 210)		 libvlc_event_manager_t* _hx_tmp9 = this->eventManager;
HXDLIN( 210)		::cpp::Function< void  (const  libvlc_event_t*,void *) > _hx_tmp10 = callbacks;
HXDLIN( 210)		libvlc_event_attach(_hx_tmp9,260,_hx_tmp10,this);
HXLINE( 211)		 libvlc_event_manager_t* _hx_tmp11 = this->eventManager;
HXDLIN( 211)		::cpp::Function< void  (const  libvlc_event_t*,void *) > _hx_tmp12 = callbacks;
HXDLIN( 211)		libvlc_event_attach(_hx_tmp11,262,_hx_tmp12,this);
HXLINE( 212)		 libvlc_event_manager_t* _hx_tmp13 = this->eventManager;
HXDLIN( 212)		::cpp::Function< void  (const  libvlc_event_t*,void *) > _hx_tmp14 = callbacks;
HXDLIN( 212)		libvlc_event_attach(_hx_tmp13,261,_hx_tmp14,this);
HXLINE( 213)		 libvlc_event_manager_t* _hx_tmp15 = this->eventManager;
HXDLIN( 213)		::cpp::Function< void  (const  libvlc_event_t*,void *) > _hx_tmp16 = callbacks;
HXDLIN( 213)		libvlc_event_attach(_hx_tmp15,265,_hx_tmp16,this);
HXLINE( 214)		 libvlc_event_manager_t* _hx_tmp17 = this->eventManager;
HXDLIN( 214)		::cpp::Function< void  (const  libvlc_event_t*,void *) > _hx_tmp18 = callbacks;
HXDLIN( 214)		libvlc_event_attach(_hx_tmp17,266,_hx_tmp18,this);
HXLINE( 215)		 libvlc_event_manager_t* _hx_tmp19 = this->eventManager;
HXDLIN( 215)		::cpp::Function< void  (const  libvlc_event_t*,void *) > _hx_tmp20 = callbacks;
HXDLIN( 215)		libvlc_event_attach(_hx_tmp19,263,_hx_tmp20,this);
HXLINE( 216)		 libvlc_event_manager_t* _hx_tmp21 = this->eventManager;
HXDLIN( 216)		::cpp::Function< void  (const  libvlc_event_t*,void *) > _hx_tmp22 = callbacks;
HXDLIN( 216)		libvlc_event_attach(_hx_tmp21,264,_hx_tmp22,this);
HXLINE( 218)		libvlc_media_player_play(this->mediaPlayer);
            	}


HX_DEFINE_DYNAMIC_FUNC2(VLCBitmap_obj,play,(void))

void VLCBitmap_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_223_stop)
HXDLIN( 223)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 224)			libvlc_media_player_stop(this->mediaPlayer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,stop,(void))

void VLCBitmap_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_229_pause)
HXDLIN( 229)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 230)			libvlc_media_player_set_pause(this->mediaPlayer,1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,pause,(void))

void VLCBitmap_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_235_resume)
HXDLIN( 235)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 236)			libvlc_media_player_set_pause(this->mediaPlayer,0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,resume,(void))

void VLCBitmap_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_240_dispose)
HXLINE( 245)		if (this->get_isPlaying()) {
HXLINE( 246)			this->stop();
            		}
HXLINE( 248)		if (this->stage->hasEventListener(HX_("enterFrame",f5,03,50,02))) {
HXLINE( 249)			this->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null());
            		}
HXLINE( 251)		if (::hx::IsNotNull( this->texture )) {
HXLINE( 253)			this->texture->dispose();
HXLINE( 254)			this->texture = null();
            		}
HXLINE( 257)		if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 259)			this->get_bitmapData()->dispose();
HXLINE( 260)			this->set_bitmapData(null());
            		}
HXLINE( 263)		bool _hx_tmp;
HXDLIN( 263)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 263)			_hx_tmp = (this->buffer->length > 0);
            		}
            		else {
HXLINE( 263)			_hx_tmp = false;
            		}
HXDLIN( 263)		if (_hx_tmp) {
HXLINE( 264)			this->buffer = ::Array_obj< unsigned char >::__new(0);
            		}
HXLINE( 266)		this->isDisplaying = false;
HXLINE( 268)		this->onOpening = null();
HXLINE( 269)		this->onPlaying = null();
HXLINE( 270)		this->onStopped = null();
HXLINE( 271)		this->onPaused = null();
HXLINE( 272)		this->onEndReached = null();
HXLINE( 273)		this->onEncounteredError = null();
HXLINE( 274)		this->onForward = null();
HXLINE( 275)		this->onBackward = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,dispose,(void))

void VLCBitmap_obj::onAddedToStage( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_284_onAddedToStage)
HXLINE( 285)		if (this->hasEventListener(HX_("addedToStage",63,22,55,0c))) {
HXLINE( 286)			this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null());
            		}
HXLINE( 288)		this->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,onAddedToStage,(void))

void VLCBitmap_obj::onEnterFrame( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_293_onEnterFrame)
HXLINE( 294)		this->checkFlags();
HXLINE( 296)		bool _hx_tmp;
HXDLIN( 296)		bool _hx_tmp1;
HXDLIN( 296)		bool _hx_tmp2;
HXDLIN( 296)		if (this->get_isPlaying()) {
HXLINE( 296)			_hx_tmp2 = this->isDisplaying;
            		}
            		else {
HXLINE( 296)			_hx_tmp2 = false;
            		}
HXDLIN( 296)		if (_hx_tmp2) {
HXLINE( 296)			if ((this->videoWidth > 0)) {
HXLINE( 296)				_hx_tmp1 = (this->videoHeight > 0);
            			}
            			else {
HXLINE( 296)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 296)			_hx_tmp1 = false;
            		}
HXDLIN( 296)		if (_hx_tmp1) {
HXLINE( 296)			_hx_tmp = ::hx::IsNotNull( this->pixels );
            		}
            		else {
HXLINE( 296)			_hx_tmp = false;
            		}
HXDLIN( 296)		if (_hx_tmp) {
HXLINE( 298)			int time = ::openfl::Lib_obj::getTimer();
HXLINE( 299)			int elements = ((this->videoWidth * this->videoHeight) * 4);
HXLINE( 300)			this->render((( (Float)(time) ) - this->currentTime),elements);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,onEnterFrame,(void))

void VLCBitmap_obj::checkFlags(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_305_checkFlags)
HXLINE( 306)		if (this->flags->__get(0)) {
HXLINE( 308)			this->flags[0] = false;
HXLINE( 309)			if (::hx::IsNotNull( this->onOpening )) {
HXLINE( 310)				this->onOpening();
            			}
            		}
HXLINE( 313)		if (this->flags->__get(1)) {
HXLINE( 315)			this->flags[1] = false;
HXLINE( 316)			if (::hx::IsNotNull( this->onPlaying )) {
HXLINE( 317)				this->onPlaying();
            			}
            		}
HXLINE( 320)		if (this->flags->__get(2)) {
HXLINE( 322)			this->flags[2] = false;
HXLINE( 323)			if (::hx::IsNotNull( this->onPaused )) {
HXLINE( 324)				this->onPaused();
            			}
            		}
HXLINE( 327)		if (this->flags->__get(3)) {
HXLINE( 329)			this->flags[3] = false;
HXLINE( 330)			if (::hx::IsNotNull( this->onStopped )) {
HXLINE( 331)				this->onStopped();
            			}
            		}
HXLINE( 334)		if (this->flags->__get(4)) {
HXLINE( 336)			this->flags[4] = false;
HXLINE( 337)			if (::hx::IsNotNull( this->onEndReached )) {
HXLINE( 338)				this->onEndReached();
            			}
            		}
HXLINE( 341)		if (this->flags->__get(5)) {
HXLINE( 343)			this->flags[5] = false;
HXLINE( 344)			if (::hx::IsNotNull( this->onEncounteredError )) {
HXLINE( 345)				this->onEncounteredError();
            			}
            		}
HXLINE( 348)		if (this->flags->__get(6)) {
HXLINE( 350)			this->flags[6] = false;
HXLINE( 351)			if (::hx::IsNotNull( this->onForward )) {
HXLINE( 352)				this->onForward();
            			}
            		}
HXLINE( 355)		if (this->flags->__get(7)) {
HXLINE( 357)			this->flags[7] = false;
HXLINE( 358)			if (::hx::IsNotNull( this->onBackward )) {
HXLINE( 359)				this->onBackward();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,checkFlags,(void))

void VLCBitmap_obj::render(Float deltaTime,int elementsCount){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_364_render)
HXLINE( 366)		if (::hx::IsNull( this->texture )) {
HXLINE( 367)			this->texture = ::openfl::Lib_obj::get_current()->stage->context3D->createRectangleTexture(this->videoWidth,this->videoHeight,1,true);
            		}
HXLINE( 370)		bool _hx_tmp;
HXDLIN( 370)		if (::hx::IsNull( this->get_bitmapData() )) {
HXLINE( 370)			_hx_tmp = ::hx::IsNotNull( this->texture );
            		}
            		else {
HXLINE( 370)			_hx_tmp = false;
            		}
HXDLIN( 370)		if (_hx_tmp) {
HXLINE( 371)			this->set_bitmapData(::openfl::display::BitmapData_obj::fromTexture(this->texture));
            		}
HXLINE( 374)		if (!(this->smoothing)) {
HXLINE( 375)			this->smoothing = true;
            		}
HXLINE( 377)		Float _hx_tmp1;
HXDLIN( 377)		if (((( (Float)(1000) ) / this->skipStepLimit) == 0)) {
HXLINE( 377)			Float _hx_tmp = this->get_fps();
HXDLIN( 377)			_hx_tmp1 = (_hx_tmp * this->get_rate());
            		}
            		else {
HXLINE( 377)			_hx_tmp1 = this->skipStepLimit;
            		}
HXDLIN( 377)		if ((deltaTime > _hx_tmp1)) {
HXLINE( 379)			this->currentTime = deltaTime;
HXLINE( 385)			::cpp::Pointer< unsigned char > tmp = this->pixels;
HXDLIN( 385)			this->buffer->setUnmanagedData(tmp,elementsCount);
HXLINE( 387)			bool _hx_tmp;
HXDLIN( 387)			if (::hx::IsNotNull( this->texture )) {
HXLINE( 387)				if (::hx::IsNotNull( this->buffer )) {
HXLINE( 387)					_hx_tmp = (this->buffer->length > 0);
            				}
            				else {
HXLINE( 387)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 387)				_hx_tmp = false;
            			}
HXDLIN( 387)			if (_hx_tmp) {
HXLINE( 389)				 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(this->buffer);
HXLINE( 390)				if ((bytes->length >= elementsCount)) {
HXLINE( 392)					 ::openfl::display3D::textures::RectangleTexture _hx_tmp = this->texture;
HXDLIN( 392)					_hx_tmp->uploadFromByteArray(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes),0);
HXLINE( 393)					this->set_width((this->get_width() + 1));
HXLINE( 394)					this->set_width((this->get_width() - ( (Float)(1) )));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(VLCBitmap_obj,render,(void))

int VLCBitmap_obj::get_time(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_406_get_time)
HXLINE( 407)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 408)			return ( (int)(libvlc_media_player_get_time(this->mediaPlayer)) );
            		}
HXLINE( 410)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_time,return )

int VLCBitmap_obj::set_time(int value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_414_set_time)
HXLINE( 415)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 416)			libvlc_media_player_set_time(this->mediaPlayer,( (::cpp::Int64)(value) ));
            		}
HXLINE( 418)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_time,return )

Float VLCBitmap_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_422_get_position)
HXLINE( 423)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 424)			return libvlc_media_player_get_position(this->mediaPlayer);
            		}
HXLINE( 426)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_position,return )

Float VLCBitmap_obj::set_position(Float value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_430_set_position)
HXLINE( 431)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 432)			libvlc_media_player_set_position(this->mediaPlayer,value);
            		}
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_position,return )

int VLCBitmap_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_438_get_length)
HXLINE( 439)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 440)			return ( (int)(libvlc_media_player_get_length(this->mediaPlayer)) );
            		}
HXLINE( 442)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_length,return )

int VLCBitmap_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_446_get_duration)
HXLINE( 447)		if (::hx::IsNotNull( this->mediaItem )) {
HXLINE( 448)			return ( (int)(libvlc_media_get_duration(this->mediaItem)) );
            		}
HXLINE( 450)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_duration,return )

::String VLCBitmap_obj::get_mrl(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_454_get_mrl)
HXLINE( 455)		if (::hx::IsNotNull( this->mediaItem )) {
HXLINE( 456)			return libvlc_media_get_mrl(this->mediaItem);
            		}
HXLINE( 458)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_mrl,return )

int VLCBitmap_obj::get_volume(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_462_get_volume)
HXLINE( 463)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 464)			return libvlc_audio_get_volume(this->mediaPlayer);
            		}
HXLINE( 466)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_volume,return )

int VLCBitmap_obj::set_volume(int value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_470_set_volume)
HXLINE( 471)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 472)			libvlc_audio_set_volume(this->mediaPlayer,value);
            		}
HXLINE( 474)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_volume,return )

int VLCBitmap_obj::get_delay(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_478_get_delay)
HXLINE( 479)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 480)			return ( (int)(libvlc_audio_get_delay(this->mediaPlayer)) );
            		}
HXLINE( 482)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_delay,return )

int VLCBitmap_obj::set_delay(int value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_486_set_delay)
HXLINE( 487)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 488)			libvlc_audio_set_delay(this->mediaPlayer,( (::cpp::Int64)(value) ));
            		}
HXLINE( 490)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_delay,return )

Float VLCBitmap_obj::get_rate(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_494_get_rate)
HXLINE( 495)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 496)			return libvlc_media_player_get_rate(this->mediaPlayer);
            		}
HXLINE( 498)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_rate,return )

Float VLCBitmap_obj::set_rate(Float value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_502_set_rate)
HXLINE( 503)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 504)			libvlc_media_player_set_rate(this->mediaPlayer,value);
            		}
HXLINE( 506)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VLCBitmap_obj,set_rate,return )

Float VLCBitmap_obj::get_fps(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_510_get_fps)
HXLINE( 511)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 512)			return libvlc_media_player_get_fps(this->mediaPlayer);
            		}
HXLINE( 514)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_fps,return )

bool VLCBitmap_obj::get_isPlaying(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_518_get_isPlaying)
HXLINE( 519)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 520)			return libvlc_media_player_is_playing(this->mediaPlayer);
            		}
HXLINE( 522)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_isPlaying,return )

bool VLCBitmap_obj::get_isSeekable(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_526_get_isSeekable)
HXLINE( 527)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 528)			return libvlc_media_player_is_seekable(this->mediaPlayer);
            		}
HXLINE( 530)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_isSeekable,return )

bool VLCBitmap_obj::get_canPause(){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_534_get_canPause)
HXLINE( 535)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 536)			return libvlc_media_player_can_pause(this->mediaPlayer);
            		}
HXLINE( 538)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VLCBitmap_obj,get_canPause,return )

Float VLCBitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_542_set_height)
HXLINE( 543)		if (::hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 544)			this->set_scaleY((value / ( (Float)(this->_hx___bitmapData->height) )));
            		}
            		else {
HXLINE( 545)			if ((this->videoHeight != 0)) {
HXLINE( 546)				this->set_scaleY((value / ( (Float)(this->videoHeight) )));
            			}
            			else {
HXLINE( 548)				this->set_scaleY(( (Float)(1) ));
            			}
            		}
HXLINE( 550)		return value;
            	}


Float VLCBitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_3158faa035054fd5_554_set_width)
HXLINE( 555)		if (::hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 556)			this->set_scaleX((value / ( (Float)(this->_hx___bitmapData->width) )));
            		}
            		else {
HXLINE( 557)			if ((this->videoWidth != 0)) {
HXLINE( 558)				this->set_scaleX((value / ( (Float)(this->videoWidth) )));
            			}
            			else {
HXLINE( 560)				this->set_scaleX(( (Float)(1) ));
            			}
            		}
HXLINE( 562)		return value;
            	}



::hx::ObjectPtr< VLCBitmap_obj > VLCBitmap_obj::__new() {
	::hx::ObjectPtr< VLCBitmap_obj > __this = new VLCBitmap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VLCBitmap_obj > VLCBitmap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VLCBitmap_obj *__this = (VLCBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VLCBitmap_obj), true, "hxcodec.vlc.VLCBitmap"));
	*(void **)__this = VLCBitmap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VLCBitmap_obj::VLCBitmap_obj()
{
}

void VLCBitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VLCBitmap);
	HX_MARK_MEMBER_NAME(skipStepLimit,"skipStepLimit");
	HX_MARK_MEMBER_NAME(videoWidth,"videoWidth");
	HX_MARK_MEMBER_NAME(videoHeight,"videoHeight");
	HX_MARK_MEMBER_NAME(isDisplaying,"isDisplaying");
	HX_MARK_MEMBER_NAME(onOpening,"onOpening");
	HX_MARK_MEMBER_NAME(onPlaying,"onPlaying");
	HX_MARK_MEMBER_NAME(onPaused,"onPaused");
	HX_MARK_MEMBER_NAME(onStopped,"onStopped");
	HX_MARK_MEMBER_NAME(onEndReached,"onEndReached");
	HX_MARK_MEMBER_NAME(onEncounteredError,"onEncounteredError");
	HX_MARK_MEMBER_NAME(onForward,"onForward");
	HX_MARK_MEMBER_NAME(onBackward,"onBackward");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(instance,"instance");
	HX_MARK_MEMBER_NAME(audioOutput,"audioOutput");
	HX_MARK_MEMBER_NAME(mediaPlayer,"mediaPlayer");
	HX_MARK_MEMBER_NAME(mediaItem,"mediaItem");
	HX_MARK_MEMBER_NAME(eventManager,"eventManager");
	HX_MARK_MEMBER_NAME(currentTime,"currentTime");
	 ::openfl::display::Bitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VLCBitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipStepLimit,"skipStepLimit");
	HX_VISIT_MEMBER_NAME(videoWidth,"videoWidth");
	HX_VISIT_MEMBER_NAME(videoHeight,"videoHeight");
	HX_VISIT_MEMBER_NAME(isDisplaying,"isDisplaying");
	HX_VISIT_MEMBER_NAME(onOpening,"onOpening");
	HX_VISIT_MEMBER_NAME(onPlaying,"onPlaying");
	HX_VISIT_MEMBER_NAME(onPaused,"onPaused");
	HX_VISIT_MEMBER_NAME(onStopped,"onStopped");
	HX_VISIT_MEMBER_NAME(onEndReached,"onEndReached");
	HX_VISIT_MEMBER_NAME(onEncounteredError,"onEncounteredError");
	HX_VISIT_MEMBER_NAME(onForward,"onForward");
	HX_VISIT_MEMBER_NAME(onBackward,"onBackward");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(instance,"instance");
	HX_VISIT_MEMBER_NAME(audioOutput,"audioOutput");
	HX_VISIT_MEMBER_NAME(mediaPlayer,"mediaPlayer");
	HX_VISIT_MEMBER_NAME(mediaItem,"mediaItem");
	HX_VISIT_MEMBER_NAME(eventManager,"eventManager");
	HX_VISIT_MEMBER_NAME(currentTime,"currentTime");
	 ::openfl::display::Bitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VLCBitmap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mrl") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mrl() ); }
		if (HX_FIELD_EQ(inName,"fps") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fps() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_time() ); }
		if (HX_FIELD_EQ(inName,"rate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rate() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_delay() ); }
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_volume() ); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return ::hx::Val( pixels ); }
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mrl") ) { return ::hx::Val( get_mrl_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fps") ) { return ::hx::Val( get_fps_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_duration() ); }
		if (HX_FIELD_EQ(inName,"canPause") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_canPause() ); }
		if (HX_FIELD_EQ(inName,"onPaused") ) { return ::hx::Val( onPaused ); }
		if (HX_FIELD_EQ(inName,"get_time") ) { return ::hx::Val( get_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return ::hx::Val( set_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rate") ) { return ::hx::Val( get_rate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rate") ) { return ::hx::Val( set_rate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPlaying") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isPlaying() ); }
		if (HX_FIELD_EQ(inName,"onOpening") ) { return ::hx::Val( onOpening ); }
		if (HX_FIELD_EQ(inName,"onPlaying") ) { return ::hx::Val( onPlaying ); }
		if (HX_FIELD_EQ(inName,"onStopped") ) { return ::hx::Val( onStopped ); }
		if (HX_FIELD_EQ(inName,"onForward") ) { return ::hx::Val( onForward ); }
		if (HX_FIELD_EQ(inName,"get_delay") ) { return ::hx::Val( get_delay_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_delay") ) { return ::hx::Val( set_delay_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { return ::hx::Val( videoWidth ); }
		if (HX_FIELD_EQ(inName,"isSeekable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isSeekable() ); }
		if (HX_FIELD_EQ(inName,"onBackward") ) { return ::hx::Val( onBackward ); }
		if (HX_FIELD_EQ(inName,"checkFlags") ) { return ::hx::Val( checkFlags_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return ::hx::Val( get_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { return ::hx::Val( videoHeight ); }
		if (HX_FIELD_EQ(inName,"currentTime") ) { return ::hx::Val( currentTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isDisplaying") ) { return ::hx::Val( isDisplaying ); }
		if (HX_FIELD_EQ(inName,"onEndReached") ) { return ::hx::Val( onEndReached ); }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return ::hx::Val( onEnterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return ::hx::Val( get_duration_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_canPause") ) { return ::hx::Val( get_canPause_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skipStepLimit") ) { return ::hx::Val( skipStepLimit ); }
		if (HX_FIELD_EQ(inName,"get_isPlaying") ) { return ::hx::Val( get_isPlaying_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return ::hx::Val( onAddedToStage_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isSeekable") ) { return ::hx::Val( get_isSeekable_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onEncounteredError") ) { return ::hx::Val( onEncounteredError ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VLCBitmap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_time(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"rate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rate(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_delay(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< ::Array< bool > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::cpp::Pointer< unsigned char > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast<  ::openfl::display3D::textures::RectangleTexture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"onPaused") ) { onPaused=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onOpening") ) { onOpening=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPlaying") ) { onPlaying=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStopped") ) { onStopped=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onForward") ) { onForward=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { videoWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onBackward") ) { onBackward=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { videoHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isDisplaying") ) { isDisplaying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onEndReached") ) { onEndReached=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skipStepLimit") ) { skipStepLimit=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onEncounteredError") ) { onEncounteredError=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VLCBitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("skipStepLimit",d0,35,89,53));
	outFields->push(HX_("videoWidth",8b,f3,30,a6));
	outFields->push(HX_("videoHeight",c2,9e,f3,7a));
	outFields->push(HX_("isDisplaying",6a,60,fb,af));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("mrl",67,19,53,00));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("rate",e0,52,a4,4b));
	outFields->push(HX_("fps",e9,c7,4d,00));
	outFields->push(HX_("isPlaying",a4,8c,16,8e));
	outFields->push(HX_("isSeekable",1c,21,a4,d2));
	outFields->push(HX_("canPause",c6,18,eb,2b));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("instance",95,1f,e1,59));
	outFields->push(HX_("audioOutput",77,40,31,db));
	outFields->push(HX_("mediaPlayer",65,27,02,c6));
	outFields->push(HX_("mediaItem",17,38,03,a6));
	outFields->push(HX_("eventManager",73,89,16,a4));
	outFields->push(HX_("currentTime",e6,a4,8e,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VLCBitmap_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(VLCBitmap_obj,skipStepLimit),HX_("skipStepLimit",d0,35,89,53)},
	{::hx::fsInt,(int)offsetof(VLCBitmap_obj,videoWidth),HX_("videoWidth",8b,f3,30,a6)},
	{::hx::fsInt,(int)offsetof(VLCBitmap_obj,videoHeight),HX_("videoHeight",c2,9e,f3,7a)},
	{::hx::fsBool,(int)offsetof(VLCBitmap_obj,isDisplaying),HX_("isDisplaying",6a,60,fb,af)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onOpening),HX_("onOpening",f9,bb,ef,17)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onPlaying),HX_("onPlaying",0f,c8,c2,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onPaused),HX_("onPaused",2d,37,31,cf)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onStopped),HX_("onStopped",ae,8a,0c,1b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onEndReached),HX_("onEndReached",f6,c1,9d,80)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onEncounteredError),HX_("onEncounteredError",d5,1c,32,23)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onForward),HX_("onForward",66,9a,75,bd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VLCBitmap_obj,onBackward),HX_("onBackward",22,b0,cf,04)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(VLCBitmap_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsUnknown /* ::cpp::Pointer< unsigned char > */ ,(int)offsetof(VLCBitmap_obj,pixels),HX_("pixels",2d,ef,a9,8c)},
	{::hx::fsObject /* ::Array< unsigned char > */ ,(int)offsetof(VLCBitmap_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsObject /*  ::openfl::display3D::textures::RectangleTexture */ ,(int)offsetof(VLCBitmap_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsUnknown /*  libvlc_instance_t* */ ,(int)offsetof(VLCBitmap_obj,instance),HX_("instance",95,1f,e1,59)},
	{::hx::fsUnknown /*  libvlc_audio_output_t* */ ,(int)offsetof(VLCBitmap_obj,audioOutput),HX_("audioOutput",77,40,31,db)},
	{::hx::fsUnknown /*  libvlc_media_player_t* */ ,(int)offsetof(VLCBitmap_obj,mediaPlayer),HX_("mediaPlayer",65,27,02,c6)},
	{::hx::fsUnknown /*  libvlc_media_t* */ ,(int)offsetof(VLCBitmap_obj,mediaItem),HX_("mediaItem",17,38,03,a6)},
	{::hx::fsUnknown /*  libvlc_event_manager_t* */ ,(int)offsetof(VLCBitmap_obj,eventManager),HX_("eventManager",73,89,16,a4)},
	{::hx::fsFloat,(int)offsetof(VLCBitmap_obj,currentTime),HX_("currentTime",e6,a4,8e,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VLCBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String VLCBitmap_obj_sMemberFields[] = {
	HX_("skipStepLimit",d0,35,89,53),
	HX_("videoWidth",8b,f3,30,a6),
	HX_("videoHeight",c2,9e,f3,7a),
	HX_("isDisplaying",6a,60,fb,af),
	HX_("onOpening",f9,bb,ef,17),
	HX_("onPlaying",0f,c8,c2,61),
	HX_("onPaused",2d,37,31,cf),
	HX_("onStopped",ae,8a,0c,1b),
	HX_("onEndReached",f6,c1,9d,80),
	HX_("onEncounteredError",d5,1c,32,23),
	HX_("onForward",66,9a,75,bd),
	HX_("onBackward",22,b0,cf,04),
	HX_("flags",47,2b,8c,02),
	HX_("pixels",2d,ef,a9,8c),
	HX_("buffer",00,bd,94,d0),
	HX_("texture",db,c8,e0,9e),
	HX_("play",f4,2d,5a,4a),
	HX_("stop",02,f0,5b,4c),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("dispose",9f,80,4c,bb),
	HX_("onAddedToStage",22,82,44,36),
	HX_("currentTime",e6,a4,8e,85),
	HX_("onEnterFrame",f4,a5,93,da),
	HX_("checkFlags",5f,2d,7c,12),
	HX_("render",56,6b,29,05),
	HX_("get_time",96,87,b7,cc),
	HX_("set_time",0a,e1,14,7b),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("get_length",af,04,8f,8f),
	HX_("get_duration",5d,c3,a7,c9),
	HX_("get_mrl",fe,e1,c7,26),
	HX_("get_volume",a3,99,da,4f),
	HX_("set_volume",17,38,58,53),
	HX_("get_delay",da,33,d0,1a),
	HX_("set_delay",e6,1f,21,fe),
	HX_("get_rate",69,0e,5f,cb),
	HX_("set_rate",dd,67,bc,79),
	HX_("get_fps",80,90,c2,26),
	HX_("get_isPlaying",7b,60,7a,4f),
	HX_("get_isSeekable",65,a9,99,48),
	HX_("get_canPause",cf,cc,04,e1),
	HX_("set_height",24,16,51,f6),
	HX_("set_width",69,fe,5c,f1),
	::String(null()) };

::hx::Class VLCBitmap_obj::__mClass;

void VLCBitmap_obj::__register()
{
	VLCBitmap_obj _hx_dummy;
	VLCBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcodec.vlc.VLCBitmap",f3,17,97,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VLCBitmap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VLCBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VLCBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VLCBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcodec
} // end namespace vlc
