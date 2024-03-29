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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionHandler
#include <flixel/system/debug/completion/CompletionHandler.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#include <flixel/system/debug/completion/CompletionList.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#include <flixel/system/debug/console/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace console{

Void Console_obj::__construct(::flixel::_system::debug::completion::CompletionList completionList)
{
HX_STACK_FRAME("flixel.system.debug.console.Console","new",0x900a6c8a,"flixel.system.debug.console.Console.new","flixel/system/debug/console/Console.hx",25,0x367943c8)
HX_STACK_THIS(this)
HX_STACK_ARG(completionList,"completionList")
{
	HX_STACK_LINE(59)
	this->stageMouseDown = false;
	HX_STACK_LINE(58)
	this->inputMouseDown = false;
	HX_STACK_LINE(50)
	this->objectStack = Array_obj< ::Dynamic >::__new();
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/console/Console.hx",45,0x367943c8)
			{
				HX_STACK_LINE(45)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(45)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(45)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(45)
	this->registeredHelp = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/console/Console.hx",41,0x367943c8)
			{
				HX_STACK_LINE(41)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(41)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(41)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(41)
	this->registeredFunctions = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/console/Console.hx",37,0x367943c8)
			{
				HX_STACK_LINE(37)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(37)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(37)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	this->registeredObjects = _Function_1_3::Block();
	HX_STACK_LINE(71)
	::flixel::_system::debug::GraphicConsole tmp = ::flixel::_system::debug::GraphicConsole_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	super::__construct(HX_HCSTRING("Console","\x37","\x13","\x27","\xe6"),tmp,(int)0,(int)0,false,null(),null());
	HX_STACK_LINE(72)
	this->completionList = completionList;
	HX_STACK_LINE(73)
	Float tmp1 = this->get_y();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	Float tmp2 = (tmp1 + (int)15);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	completionList->__Field(HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"), hx::paccDynamic )(tmp2);
	HX_STACK_LINE(76)
	::flixel::_system::debug::console::ConsoleUtil_obj::init();
	HX_STACK_LINE(79)
	::flixel::_system::debug::console::ConsoleHistory tmp3 = ::flixel::_system::debug::console::ConsoleHistory_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	this->history = tmp3;
	HX_STACK_LINE(80)
	this->createInputTextField();
	HX_STACK_LINE(81)
	::flixel::_system::debug::completion::CompletionList tmp4 = completionList;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	::openfl::_legacy::text::TextField tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	::flixel::_system::debug::completion::CompletionHandler_obj::__new(tmp4,tmp5);
	HX_STACK_LINE(82)
	this->registerEventListeners();
	HX_STACK_LINE(86)
	::flixel::_system::debug::console::ConsoleCommands_obj::__new(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new(::flixel::_system::debug::completion::CompletionList completionList)
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct(completionList);
	return _result_;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Console_obj::createInputTextField( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","createInputTextField",0x91c24015,"flixel.system.debug.console.Console.createInputTextField","flixel/system/debug/console/Console.hx",91,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::openfl::_legacy::text::TextField tmp = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		this->input = tmp;
		HX_STACK_LINE(94)
		::openfl::_legacy::text::TextField tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		tmp1->set_embedFonts(true);
		HX_STACK_LINE(95)
		::openfl::_legacy::text::TextField tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		::String tmp3 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		::openfl::_legacy::text::TextFormat tmp4 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp3,(int)12,(int)16777215,false,false,false,null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		tmp2->set_defaultTextFormat(tmp4);
		HX_STACK_LINE(97)
		::openfl::_legacy::text::TextField tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		tmp5->set_text(HX_HCSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)","\xf9","\x4e","\xc0","\x26"));
		HX_STACK_LINE(98)
		::openfl::_legacy::text::TextField tmp6 = this->input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		int tmp8 = (tmp7 - (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		tmp6->set_width(tmp8);
		HX_STACK_LINE(99)
		::openfl::_legacy::text::TextField tmp9 = this->input;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		int tmp10 = this->_height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		int tmp11 = (tmp10 - (int)15);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(99)
		tmp9->set_height(tmp11);
		HX_STACK_LINE(100)
		::openfl::_legacy::text::TextField tmp12 = this->input;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		tmp12->set_x((int)2);
		HX_STACK_LINE(101)
		::openfl::_legacy::text::TextField tmp13 = this->input;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(101)
		tmp13->set_y((int)15);
		HX_STACK_LINE(102)
		::openfl::_legacy::text::TextField tmp14 = this->input;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		this->addChild(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,createInputTextField,(void))

Void Console_obj::registerEventListeners( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","registerEventListeners",0x714c11de,"flixel.system.debug.console.Console.registerEventListeners","flixel/system/debug/console/Console.hx",106,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		::flixel::_system::debug::console::Console _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		tmp->set_type(((Dynamic)((int)1)));
		HX_STACK_LINE(109)
		::openfl::_legacy::text::TextField tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		Dynamic tmp2 = this->onFocus_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		tmp1->addEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp2,null(),null(),null());
		HX_STACK_LINE(110)
		::openfl::_legacy::text::TextField tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		Dynamic tmp4 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		tmp3->addEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp4,null(),null(),null());
		HX_STACK_LINE(111)
		::openfl::_legacy::text::TextField tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		::String tmp6 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		Dynamic tmp7 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		tmp5->addEventListener(tmp6,tmp7,null(),null(),null());
		HX_STACK_LINE(115)
		::openfl::_legacy::text::TextField tmp8 = this->input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(115)
		::String tmp9 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp9,"tmp9");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::flixel::_system::debug::console::Console,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/console/Console.hx",117,0x367943c8)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(117)
				_g->__FieldRef(HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d")) = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(115)
		tmp8->addEventListener(tmp9, Dynamic(new _Function_1_1(_g)),null(),null(),null());
		HX_STACK_LINE(119)
		::openfl::_legacy::display::MovieClip tmp10 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(119)
		::openfl::_legacy::display::Stage tmp11 = tmp10->get_stage();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(119)
		::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp12,"tmp12");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::flixel::_system::debug::console::Console,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","flixel/system/debug/console/Console.hx",121,0x367943c8)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(121)
				_g->__FieldRef(HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40")) = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(119)
		tmp11->addEventListener(tmp12, Dynamic(new _Function_1_2(_g)),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,registerEventListeners,(void))

Void Console_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","update",0x661b601f,"flixel.system.debug.console.Console.update","flixel/system/debug/console/Console.hx",128,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		this->super::update();
		HX_STACK_LINE(131)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		::openfl::_legacy::display::InteractiveObject tmp2 = tmp1->get_focus();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		::openfl::_legacy::text::TextField tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		if ((tmp5)){
			HX_STACK_LINE(131)
			tmp6 = this->stageMouseDown;
		}
		else{
			HX_STACK_LINE(131)
			tmp6 = false;
		}
		HX_STACK_LINE(131)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		if ((tmp6)){
			HX_STACK_LINE(131)
			bool tmp8 = this->inputMouseDown;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(131)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(131)
			tmp7 = false;
		}
		HX_STACK_LINE(131)
		if ((tmp7)){
			HX_STACK_LINE(133)
			::openfl::_legacy::display::MovieClip tmp8 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(133)
			::openfl::_legacy::display::Stage tmp9 = tmp8->get_stage();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(133)
			tmp9->set_focus(null());
			HX_STACK_LINE(135)
			::flixel::FlxGame tmp10 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(135)
			tmp10->onFocus(null());
		}
		HX_STACK_LINE(138)
		this->stageMouseDown = false;
		HX_STACK_LINE(139)
		this->inputMouseDown = false;
	}
return null();
}


Void Console_obj::onFocus( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","onFocus",0xeecff763,"flixel.system.debug.console.Console.onFocus","flixel/system/debug/console/Console.hx",145,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(160)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		tmp->enabled = false;
		HX_STACK_LINE(163)
		::openfl::_legacy::text::TextField tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		::String tmp2 = tmp1->get_text();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		bool tmp3 = (tmp2 == HX_HCSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)","\xf9","\x4e","\xc0","\x26"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		if ((tmp3)){
			HX_STACK_LINE(164)
			::openfl::_legacy::text::TextField tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			tmp4->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocus,(void))

Void Console_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","onFocusLost",0x2ed3bae7,"flixel.system.debug.console.Console.onFocusLost","flixel/system/debug/console/Console.hx",170,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(184)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		tmp->enabled = true;
		HX_STACK_LINE(187)
		::openfl::_legacy::text::TextField tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		::String tmp2 = tmp1->get_text();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		bool tmp3 = (tmp2 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		if ((tmp3)){
			HX_STACK_LINE(188)
			::openfl::_legacy::text::TextField tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(188)
			tmp4->set_text(HX_HCSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)","\xf9","\x4e","\xc0","\x26"));
		}
		HX_STACK_LINE(191)
		::flixel::_system::debug::completion::CompletionList tmp4 = this->completionList;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		tmp4->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocusLost,(void))

Void Console_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","onKeyDown",0x970b39ec,"flixel.system.debug.console.Console.onKeyDown","flixel/system/debug/console/Console.hx",196,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(197)
		::flixel::_system::debug::completion::CompletionList tmp = this->completionList;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		bool tmp1 = tmp->__Field(HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		if ((tmp1)){
			HX_STACK_LINE(198)
			return null();
		}
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			int _g = e->keyCode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(200)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			switch( (int)(tmp2)){
				case (int)13: {
					HX_STACK_LINE(203)
					::openfl::_legacy::text::TextField tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(203)
					::String tmp4 = tmp3->get_text();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(203)
					bool tmp5 = (tmp4 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(203)
					if ((tmp5)){
						HX_STACK_LINE(204)
						this->processCommand();
					}
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(207)
					::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(207)
					::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(207)
					tmp4->set_focus(null());
				}
				;break;
				case (int)46: {
					HX_STACK_LINE(210)
					::openfl::_legacy::text::TextField tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(210)
					tmp3->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				;break;
				case (int)38: {
					HX_STACK_LINE(213)
					::flixel::_system::debug::console::ConsoleHistory tmp3 = this->history;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(213)
					bool tmp4 = tmp3->__Field(HX_HCSTRING("get_isEmpty","\x5a","\x3e","\x5a","\x92"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(213)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(213)
					if ((tmp5)){
						HX_STACK_LINE(214)
						::flixel::_system::debug::console::ConsoleHistory tmp6 = this->history;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(214)
						::String tmp7 = tmp6->__Field(HX_HCSTRING("getPreviousCommand","\xde","\x81","\x79","\x09"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(214)
						this->setText(tmp7);
					}
				}
				;break;
				case (int)40: {
					HX_STACK_LINE(217)
					::flixel::_system::debug::console::ConsoleHistory tmp3 = this->history;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(217)
					bool tmp4 = tmp3->__Field(HX_HCSTRING("get_isEmpty","\x5a","\x3e","\x5a","\x92"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(217)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(217)
					if ((tmp5)){
						HX_STACK_LINE(218)
						::flixel::_system::debug::console::ConsoleHistory tmp6 = this->history;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(218)
						::String tmp7 = tmp6->__Field(HX_HCSTRING("getNextCommand","\xa2","\x3b","\x55","\xdf"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(218)
						this->setText(tmp7);
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onKeyDown,(void))

Void Console_obj::setText( ::String text){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","setText",0x66870699,"flixel.system.debug.console.Console.setText","flixel/system/debug/console/Console.hx",223,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(224)
		::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		::String tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		tmp->set_text(tmp1);
		HX_STACK_LINE(226)
		::openfl::_legacy::text::TextField tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(226)
		int tmp3 = text.length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		int tmp4 = text.length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		tmp2->setSelection(tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,setText,(void))

Void Console_obj::processCommand( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","processCommand",0x640a92b2,"flixel.system.debug.console.Console.processCommand","flixel/system/debug/console/Console.hx",231,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(233)
			::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(233)
			::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(233)
			::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			::String text = tmp2;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(237)
			::haxe::ds::StringMap tmp3 = this->registeredFunctions;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			if ((tmp7)){
				HX_STACK_LINE(238)
				hx::AddEq(text,HX_HCSTRING("()","\x01","\x23","\x00","\x00"));
			}
			HX_STACK_LINE(241)
			::String tmp8 = text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(241)
			Dynamic tmp9 = ::flixel::_system::debug::console::ConsoleUtil_obj::runCommand(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(241)
			Dynamic output = tmp9;		HX_STACK_VAR(output,"output");
			HX_STACK_LINE(242)
			bool tmp10 = (output != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(242)
			if ((tmp10)){
				HX_STACK_LINE(243)
				::flixel::_system::frontEnds::LogFrontEnd tmp11 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(243)
				::flixel::_system::debug::log::LogStyle tmp12 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(243)
				tmp11->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(output),tmp12,null());
			}
			HX_STACK_LINE(245)
			::flixel::_system::debug::console::ConsoleHistory tmp11 = this->history;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(245)
			::openfl::_legacy::text::TextField tmp12 = this->input;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(245)
			::String tmp13 = tmp12->get_text();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(245)
			tmp11->__Field(HX_HCSTRING("addCommand","\x2a","\x9d","\xf7","\xe8"), hx::paccDynamic )(tmp13);
			HX_STACK_LINE(253)
			::openfl::_legacy::text::TextField tmp14 = this->input;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(253)
			tmp14->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(258)
					::flixel::_system::frontEnds::LogFrontEnd tmp = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(258)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(258)
					::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(258)
					::String tmp3 = (HX_HCSTRING("Console: Invalid syntax: '","\x78","\x2b","\x94","\x2e") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(258)
					::String tmp4 = (tmp3 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(258)
					::flixel::_system::debug::log::LogStyle tmp5 = ::flixel::_system::debug::log::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(258)
					tmp->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp4,tmp5,true);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,processCommand,(void))

Void Console_obj::reposition( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","reposition",0x383e0c72,"flixel.system.debug.console.Console.reposition","flixel/system/debug/console/Console.hx",263,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(264)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		this->super::reposition(tmp,tmp1);
		HX_STACK_LINE(265)
		::flixel::_system::debug::completion::CompletionList tmp2 = this->completionList;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		Float tmp4 = (tmp3 + (int)15);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		tmp2->__Field(HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(266)
		::flixel::_system::debug::completion::CompletionList tmp5 = this->completionList;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		tmp5->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
	}
return null();
}


Void Console_obj::registerFunction( ::String functionAlias,Dynamic func,::String helpText){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","registerFunction",0xf8dd3a31,"flixel.system.debug.console.Console.registerFunction","flixel/system/debug/console/Console.hx",278,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(functionAlias,"functionAlias")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(helpText,"helpText")
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			Dynamic value = func;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(279)
			::haxe::ds::StringMap tmp = this->registeredFunctions;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(279)
			::String tmp1 = functionAlias;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(279)
			Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(279)
			tmp->set(tmp1,tmp2);
		}
		HX_STACK_LINE(281)
		::String tmp = functionAlias;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		Dynamic tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		::flixel::_system::debug::console::ConsoleUtil_obj::registerFunction(tmp,tmp1);
		HX_STACK_LINE(284)
		bool tmp2 = (helpText != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		if ((tmp2)){
			HX_STACK_LINE(285)
			::haxe::ds::StringMap tmp3 = this->registeredHelp;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(285)
			::String tmp4 = functionAlias;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(285)
			::String tmp5 = helpText;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(285)
			tmp3->set(tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Console_obj,registerFunction,(void))

Void Console_obj::registerObject( ::String objectAlias,Dynamic anyObject){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","registerObject",0x0bbfe598,"flixel.system.debug.console.Console.registerObject","flixel/system/debug/console/Console.hx",295,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(objectAlias,"objectAlias")
		HX_STACK_ARG(anyObject,"anyObject")
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			Dynamic value = anyObject;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(296)
			::haxe::ds::StringMap tmp = this->registeredObjects;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(296)
			::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(296)
			Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(296)
			tmp->set(tmp1,tmp2);
		}
		HX_STACK_LINE(298)
		::String tmp = objectAlias;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		Dynamic tmp1 = anyObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		::flixel::_system::debug::console::ConsoleUtil_obj::registerObject(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerObject,(void))

Void Console_obj::registerClass( ::hx::Class cl){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","registerClass",0x7ad06f7f,"flixel.system.debug.console.Console.registerClass","flixel/system/debug/console/Console.hx",309,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cl,"cl")
		HX_STACK_LINE(309)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
			HX_STACK_LINE(309)
			::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(309)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			if ((tmp2)){
				HX_STACK_LINE(309)
				cl1 = cl;
			}
			else{
				HX_STACK_LINE(309)
				::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(309)
				::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(309)
				cl1 = tmp4;
			}
			HX_STACK_LINE(309)
			::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			::String s = tmp4;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(309)
			bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(309)
			if ((tmp5)){
				HX_STACK_LINE(309)
				::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(309)
				::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				s = tmp7;
				HX_STACK_LINE(309)
				int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(309)
				int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(309)
				::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(309)
				s = tmp10;
			}
			HX_STACK_LINE(309)
			tmp = s;
		}
		HX_STACK_LINE(309)
		::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			Dynamic value = cl;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(309)
			::haxe::ds::StringMap tmp1 = this->registeredObjects;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(309)
			::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			tmp1->set(tmp2,tmp3);
		}
		HX_STACK_LINE(309)
		::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		::hx::Class tmp2 = cl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		::flixel::_system::debug::console::ConsoleUtil_obj::registerObject(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,registerClass,(void))

Void Console_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","destroy",0x788f2624,"flixel.system.debug.console.Console.destroy","flixel/system/debug/console/Console.hx",313,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		this->super::destroy();
		HX_STACK_LINE(317)
		::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(317)
		Dynamic tmp1 = this->onFocus_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(317)
		tmp->removeEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp1,null());
		HX_STACK_LINE(318)
		::openfl::_legacy::text::TextField tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		Dynamic tmp3 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(318)
		tmp2->removeEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp3,null());
		HX_STACK_LINE(319)
		::openfl::_legacy::text::TextField tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		::String tmp5 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(319)
		Dynamic tmp6 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(319)
		tmp4->removeEventListener(tmp5,tmp6,null());
		HX_STACK_LINE(322)
		::openfl::_legacy::text::TextField tmp7 = this->input;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(322)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(322)
		if ((tmp8)){
			HX_STACK_LINE(324)
			::openfl::_legacy::text::TextField tmp9 = this->input;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			this->removeChild(tmp9);
			HX_STACK_LINE(325)
			this->input = null();
		}
		HX_STACK_LINE(328)
		this->registeredObjects = null();
		HX_STACK_LINE(329)
		this->registeredFunctions = null();
		HX_STACK_LINE(330)
		this->registeredHelp = null();
		HX_STACK_LINE(332)
		this->objectStack = null();
	}
return null();
}


Void Console_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","updateSize",0x97e42880,"flixel.system.debug.console.Console.updateSize","flixel/system/debug/console/Console.hx",339,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(340)
		this->super::updateSize();
		HX_STACK_LINE(342)
		::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		int tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		int tmp2 = (tmp1 - (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(342)
		tmp->set_width(tmp2);
		HX_STACK_LINE(343)
		::openfl::_legacy::text::TextField tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		int tmp4 = this->_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(343)
		int tmp5 = (tmp4 - (int)15);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(343)
		tmp3->set_height(tmp5);
	}
return null();
}


::String Console_obj::DEFAULT_TEXT;


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_MARK_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_MARK_MEMBER_NAME(registeredHelp,"registeredHelp");
	HX_MARK_MEMBER_NAME(objectStack,"objectStack");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(inputMouseDown,"inputMouseDown");
	HX_MARK_MEMBER_NAME(stageMouseDown,"stageMouseDown");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(completionList,"completionList");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_VISIT_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_VISIT_MEMBER_NAME(registeredHelp,"registeredHelp");
	HX_VISIT_MEMBER_NAME(objectStack,"objectStack");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(inputMouseDown,"inputMouseDown");
	HX_VISIT_MEMBER_NAME(stageMouseDown,"stageMouseDown");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(completionList,"completionList");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Console_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"setText") ) { return setText_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"reposition") ) { return reposition_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { return objectStack; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerClass") ) { return registerClass_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registeredHelp") ) { return registeredHelp; }
		if (HX_FIELD_EQ(inName,"inputMouseDown") ) { return inputMouseDown; }
		if (HX_FIELD_EQ(inName,"stageMouseDown") ) { return stageMouseDown; }
		if (HX_FIELD_EQ(inName,"completionList") ) { return completionList; }
		if (HX_FIELD_EQ(inName,"processCommand") ) { return processCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"registerObject") ) { return registerObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return registerFunction_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { return registeredObjects; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { return registeredFunctions; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createInputTextField") ) { return createInputTextField_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"registerEventListeners") ) { return registerEventListeners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< ::flixel::_system::debug::console::ConsoleHistory >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { objectStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registeredHelp") ) { registeredHelp=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputMouseDown") ) { inputMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageMouseDown") ) { stageMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast< ::flixel::_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { registeredObjects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { registeredFunctions=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"));
	outFields->push(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"));
	outFields->push(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"));
	outFields->push(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d"));
	outFields->push(HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredObjects),HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredFunctions),HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredHelp),HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,objectStack),HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsBool,(int)offsetof(Console_obj,inputMouseDown),HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d")},
	{hx::fsBool,(int)offsetof(Console_obj,stageMouseDown),HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40")},
	{hx::fsObject /*::flixel::_system::debug::console::ConsoleHistory*/ ,(int)offsetof(Console_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsObject /*::flixel::_system::debug::completion::CompletionList*/ ,(int)offsetof(Console_obj,completionList),HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Console_obj::DEFAULT_TEXT,HX_HCSTRING("DEFAULT_TEXT","\x4b","\x9c","\x59","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"),
	HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"),
	HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"),
	HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d"),
	HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"),
	HX_HCSTRING("createInputTextField","\x7f","\x2b","\x43","\x44"),
	HX_HCSTRING("registerEventListeners","\xc8","\x2b","\x6e","\x76"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("setText","\x6f","\x0d","\x7e","\x12"),
	HX_HCSTRING("processCommand","\x9c","\xb2","\xcb","\x33"),
	HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"),
	HX_HCSTRING("registerFunction","\x9b","\xa8","\x15","\x13"),
	HX_HCSTRING("registerObject","\x82","\x05","\x81","\xdb"),
	HX_HCSTRING("registerClass","\xd5","\x3a","\xc1","\x3d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Console_obj::DEFAULT_TEXT,"DEFAULT_TEXT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Console_obj::DEFAULT_TEXT,"DEFAULT_TEXT");
};

#endif

hx::Class Console_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_TEXT","\x4b","\x9c","\x59","\x2d"),
	::String(null()) };

void Console_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.Console","\x98","\x1f","\xeb","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Console_obj >;
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

void Console_obj::__boot()
{
	DEFAULT_TEXT= HX_HCSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)","\xf9","\x4e","\xc0","\x26");
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
