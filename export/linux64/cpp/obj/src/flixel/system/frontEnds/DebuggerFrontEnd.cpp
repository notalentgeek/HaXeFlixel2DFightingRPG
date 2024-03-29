#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#include <flixel/system/debug/watch/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void DebuggerFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","new",0x8bc76b9f,"flixel.system.frontEnds.DebuggerFrontEnd.new","flixel/system/frontEnds/DebuggerFrontEnd.hx",14,0x2ebb4b30)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	this->visible = false;
	HX_STACK_LINE(36)
	this->drawDebugChanged = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(32)
	this->drawDebug = false;
	HX_STACK_LINE(26)
	this->toggleKeys = Array_obj< int >::__new().Add((int)192).Add((int)220);
	HX_STACK_LINE(19)
	this->precision = (int)3;
}
;
	return null();
}

//DebuggerFrontEnd_obj::~DebuggerFrontEnd_obj() { }

Dynamic DebuggerFrontEnd_obj::__CreateEmpty() { return  new DebuggerFrontEnd_obj; }
hx::ObjectPtr< DebuggerFrontEnd_obj > DebuggerFrontEnd_obj::__new()
{  hx::ObjectPtr< DebuggerFrontEnd_obj > _result_ = new DebuggerFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic DebuggerFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebuggerFrontEnd_obj > _result_ = new DebuggerFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void DebuggerFrontEnd_obj::setLayout( ::flixel::_system::debug::FlxDebuggerLayout Layout){
{
		HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","setLayout",0x96c2386b,"flixel.system.frontEnds.DebuggerFrontEnd.setLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",48,0x2ebb4b30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Layout,"Layout")
		HX_STACK_LINE(48)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::flixel::_system::debug::FlxDebugger _this = tmp->debugger;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(48)
		_this->__FieldRef(HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7")) = Layout;
		HX_STACK_LINE(48)
		_this->__Field(HX_HCSTRING("resetLayout","\xd9","\x31","\xcd","\xf8"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,setLayout,(void))

Void DebuggerFrontEnd_obj::resetLayout( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","resetLayout",0xc33ca418,"flixel.system.frontEnds.DebuggerFrontEnd.resetLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",56,0x2ebb4b30)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		tmp->debugger->__Field(HX_HCSTRING("resetLayout","\xd9","\x31","\xcd","\xf8"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerFrontEnd_obj,resetLayout,(void))

::flixel::_system::ui::FlxSystemButton DebuggerFrontEnd_obj::addButton( ::flixel::util::FlxHorizontalAlign Alignment,::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode,hx::Null< bool >  __o_UpdateLayout){
bool ToggleMode = __o_ToggleMode.Default(false);
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","addButton",0x7066ab72,"flixel.system.frontEnds.DebuggerFrontEnd.addButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",73,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(Icon,"Icon")
	HX_STACK_ARG(UpHandler,"UpHandler")
	HX_STACK_ARG(ToggleMode,"ToggleMode")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(75)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		::flixel::util::FlxHorizontalAlign tmp1 = Alignment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		::openfl::_legacy::display::BitmapData tmp2 = Icon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		Dynamic tmp3 = UpHandler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		bool tmp4 = ToggleMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		bool tmp5 = UpdateLayout;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		::flixel::_system::ui::FlxSystemButton tmp6 = tmp->debugger->__Field(HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"), hx::paccDynamic )(tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(DebuggerFrontEnd_obj,addButton,return )

::flixel::_system::debug::Window DebuggerFrontEnd_obj::track( Dynamic ObjectOrClass,::String WindowTitle){
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","track",0x1a1fb78a,"flixel.system.frontEnds.DebuggerFrontEnd.track","flixel/system/frontEnds/DebuggerFrontEnd.hx",89,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrClass,"ObjectOrClass")
	HX_STACK_ARG(WindowTitle,"WindowTitle")
	HX_STACK_LINE(91)
	Dynamic tmp = ObjectOrClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	int tmp1 = ::flixel::_system::debug::watch::Tracker_obj::objectsBeingTracked->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	if ((tmp2)){
		HX_STACK_LINE(93)
		Dynamic tmp3 = ObjectOrClass;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		::flixel::_system::debug::watch::TrackerProfile tmp4 = ::flixel::_system::debug::watch::Tracker_obj::findProfile(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		::flixel::_system::debug::watch::TrackerProfile profile = tmp4;		HX_STACK_VAR(profile,"profile");
		HX_STACK_LINE(94)
		bool tmp5 = (profile == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		if ((tmp5)){
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(97)
				::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(97)
					Dynamic tmp7 = ObjectOrClass;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(97)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(97)
					if ((tmp8)){
						HX_STACK_LINE(97)
						cl = ((::hx::Class)(ObjectOrClass));
					}
					else{
						HX_STACK_LINE(97)
						Dynamic tmp9 = ObjectOrClass;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(97)
						::hx::Class tmp10 = ::Type_obj::getClass(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(97)
						cl = tmp10;
					}
					HX_STACK_LINE(97)
					::hx::Class tmp9 = cl;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(97)
					::String tmp10 = ::Type_obj::getClassName(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(97)
					::String s = tmp10;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(97)
					bool tmp11 = (s != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(97)
					if ((tmp11)){
						HX_STACK_LINE(97)
						::String tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(97)
						::String tmp13 = ::StringTools_obj::replace(tmp12,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(97)
						s = tmp13;
						HX_STACK_LINE(97)
						int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(97)
						int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(97)
						::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(97)
						s = tmp16;
					}
					HX_STACK_LINE(97)
					tmp6 = s;
				}
				HX_STACK_LINE(96)
				::String tmp7 = (HX_HCSTRING("Could not find a tracking profile for object of class '","\x1a","\xec","\x71","\x30") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				::String tmp8 = (tmp7 + HX_HCSTRING("'.","\x27","\x22","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				Dynamic Data = tmp8;		HX_STACK_VAR(Data,"Data");
				HX_STACK_LINE(96)
				::flixel::_system::frontEnds::LogFrontEnd tmp9 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				Dynamic tmp10 = Data;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				::flixel::_system::debug::log::LogStyle tmp11 = ::flixel::_system::debug::log::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(96)
				tmp9->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp10,tmp11,true);
			}
			HX_STACK_LINE(98)
			return null();
		}
		else{
			HX_STACK_LINE(102)
			::flixel::_system::debug::Window tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				::flixel::_system::debug::FlxDebugger _this = tmp7->debugger;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(102)
				::flixel::_system::debug::watch::Tracker tmp8 = ::flixel::_system::debug::watch::Tracker_obj::__new(profile,ObjectOrClass,WindowTitle);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				::flixel::_system::debug::Window window = tmp8;		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(102)
				::flixel::_system::debug::Window tmp9 = window;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				_this->__Field(HX_HCSTRING("_windows","\x04","\x38","\x2d","\x22"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
				HX_STACK_LINE(102)
				::flixel::_system::debug::Window tmp10 = window;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(102)
				_this->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(tmp10);
				HX_STACK_LINE(102)
				bool tmp11 = (_this->__Field(HX_HCSTRING("_screenBounds","\xe0","\x21","\xaa","\x25"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(102)
				if ((tmp11)){
					HX_STACK_LINE(102)
					_this->__Field(HX_HCSTRING("updateBounds","\x5e","\x2d","\xe1","\x65"), hx::paccDynamic )();
					HX_STACK_LINE(102)
					window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
				}
				HX_STACK_LINE(102)
				tmp6 = window;
			}
			HX_STACK_LINE(102)
			return tmp6;
		}
	}
	HX_STACK_LINE(106)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,track,return )

Void DebuggerFrontEnd_obj::addTrackerProfile( ::flixel::_system::debug::watch::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","addTrackerProfile",0xb36941d1,"flixel.system.frontEnds.DebuggerFrontEnd.addTrackerProfile","flixel/system/frontEnds/DebuggerFrontEnd.hx",117,0x2ebb4b30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(117)
		bool tmp = (Profile != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		if ((tmp)){
			HX_STACK_LINE(117)
			::flixel::_system::debug::watch::Tracker_obj::initProfiles();
			HX_STACK_LINE(117)
			::flixel::_system::debug::watch::TrackerProfile tmp1 = Profile;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,addTrackerProfile,(void))

Void DebuggerFrontEnd_obj::removeButton( ::flixel::_system::ui::FlxSystemButton Button,hx::Null< bool >  __o_UpdateLayout){
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","removeButton",0xa0228237,"flixel.system.frontEnds.DebuggerFrontEnd.removeButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",128,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Button,"Button")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(130)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		::flixel::_system::ui::FlxSystemButton tmp1 = Button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		bool tmp2 = UpdateLayout;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		tmp->debugger->__Field(HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"), hx::paccDynamic )(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,removeButton,(void))

bool DebuggerFrontEnd_obj::set_drawDebug( bool Value){
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","set_drawDebug",0x8073fd91,"flixel.system.frontEnds.DebuggerFrontEnd.set_drawDebug","flixel/system/frontEnds/DebuggerFrontEnd.hx",138,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(140)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	bool tmp1 = this->drawDebug;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	if ((tmp2)){
		HX_STACK_LINE(141)
		::flixel::util::_FlxSignal::FlxSignal0 tmp3 = this->drawDebugChanged;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		tmp3->dispatch();
	}
	HX_STACK_LINE(144)
	bool tmp3 = this->drawDebug = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(144)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_drawDebug,return )

bool DebuggerFrontEnd_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","set_visible",0xfdfb51d4,"flixel.system.frontEnds.DebuggerFrontEnd.set_visible","flixel/system/frontEnds/DebuggerFrontEnd.hx",148,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(150)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	bool tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	tmp->debugger->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(154)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	if ((tmp3)){
		HX_STACK_LINE(156)
		::openfl::_legacy::display::MovieClip tmp4 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		::openfl::_legacy::display::Stage tmp5 = tmp4->get_stage();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		tmp5->set_stageFocusRect(false);
		HX_STACK_LINE(157)
		::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		::flixel::FlxGame tmp8 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(157)
		tmp7->set_focus(tmp8);
	}
	HX_STACK_LINE(161)
	bool tmp4 = this->visible = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(161)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_visible,return )


DebuggerFrontEnd_obj::DebuggerFrontEnd_obj()
{
}

void DebuggerFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebuggerFrontEnd);
	HX_MARK_MEMBER_NAME(precision,"precision");
	HX_MARK_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_MARK_MEMBER_NAME(drawDebug,"drawDebug");
	HX_MARK_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_END_CLASS();
}

void DebuggerFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(precision,"precision");
	HX_VISIT_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_VISIT_MEMBER_NAME(drawDebug,"drawDebug");
	HX_VISIT_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_VISIT_MEMBER_NAME(visible,"visible");
}

Dynamic DebuggerFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"track") ) { return track_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { return precision; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug; }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return addButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { return toggleKeys; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_drawDebug") ) { return set_drawDebug_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { return drawDebugChanged; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addTrackerProfile") ) { return addTrackerProfile_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DebuggerFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { precision=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { if (inCallProp == hx::paccAlways) return set_drawDebug(inValue);drawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { toggleKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { drawDebugChanged=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebuggerFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"));
	outFields->push(HX_HCSTRING("toggleKeys","\xa8","\x27","\xbd","\xde"));
	outFields->push(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"));
	outFields->push(HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DebuggerFrontEnd_obj,precision),HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DebuggerFrontEnd_obj,toggleKeys),HX_HCSTRING("toggleKeys","\xa8","\x27","\xbd","\xde")},
	{hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,drawDebug),HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(DebuggerFrontEnd_obj,drawDebugChanged),HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47")},
	{hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"),
	HX_HCSTRING("toggleKeys","\xa8","\x27","\xbd","\xde"),
	HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"),
	HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("setLayout","\xec","\x23","\x60","\xb8"),
	HX_HCSTRING("resetLayout","\xd9","\x31","\xcd","\xf8"),
	HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"),
	HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),
	HX_HCSTRING("addTrackerProfile","\x52","\x16","\x10","\x21"),
	HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"),
	HX_HCSTRING("set_drawDebug","\x92","\x3d","\x94","\xa5"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class DebuggerFrontEnd_obj::__mClass;

void DebuggerFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.DebuggerFrontEnd","\x2d","\xb0","\x6b","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DebuggerFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
