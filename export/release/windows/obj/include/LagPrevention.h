#ifndef INCLUDED_LagPrevention
#define INCLUDED_LagPrevention

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(LagPrevention)



class HXCPP_CLASS_ATTRIBUTES LagPrevention_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LagPrevention_obj OBJ_;
		LagPrevention_obj();

	public:
		enum { _hx_ClassId = 0x1c201202 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="LagPrevention")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"LagPrevention"); }

		inline static ::hx::ObjectPtr< LagPrevention_obj > __new() {
			::hx::ObjectPtr< LagPrevention_obj > __this = new LagPrevention_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LagPrevention_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LagPrevention_obj *__this = (LagPrevention_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LagPrevention_obj), false, "LagPrevention"));
			*(void **)__this = LagPrevention_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LagPrevention_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LagPrevention",c2,fc,d8,3f); }

		static void init();
		static ::Dynamic init_dyn();

		static void checkPerformance();
		static ::Dynamic checkPerformance_dyn();

		static void safeLoop( ::Dynamic task,::hx::Null< int >  repeat,::hx::Null< int >  delayMS);
		static ::Dynamic safeLoop_dyn();

};


#endif /* INCLUDED_LagPrevention */ 
