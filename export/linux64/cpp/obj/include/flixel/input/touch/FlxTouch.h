#ifndef INCLUDED_flixel_input_touch_FlxTouch
#define INCLUDED_flixel_input_touch_FlxTouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES  FlxTouch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTouch_obj OBJ_;
		FlxTouch_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.touch.FlxTouch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTouch_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTouch_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxTouch","\x0d","\x22","\x0d","\xd1"); }

};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouch */ 
