#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{

Void FlxBasic_obj::__construct()
{
HX_STACK_FRAME("flixel.FlxBasic","new",0x9d630540,"flixel.FlxBasic.new","flixel/FlxBasic.hx",10,0xd8d6cfcf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(59)
	this->flixelType = (int)0;
	HX_STACK_LINE(44)
	this->exists = true;
	HX_STACK_LINE(39)
	this->alive = true;
	HX_STACK_LINE(34)
	this->visible = true;
	HX_STACK_LINE(30)
	this->active = true;
	HX_STACK_LINE(26)
	this->ID = (int)-1;
}
;
	return null();
}

//FlxBasic_obj::~FlxBasic_obj() { }

Dynamic FlxBasic_obj::__CreateEmpty() { return  new FlxBasic_obj; }
hx::ObjectPtr< FlxBasic_obj > FlxBasic_obj::__new()
{  hx::ObjectPtr< FlxBasic_obj > _result_ = new FlxBasic_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBasic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBasic_obj > _result_ = new FlxBasic_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxBasic_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxBasic_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxBasic_obj >(this); }
Void FlxBasic_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxBasic","destroy",0xc50151da,"flixel.FlxBasic.destroy","flixel/FlxBasic.hx",70,0xd8d6cfcf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->set_exists(false);
		HX_STACK_LINE(72)
		this->_cameras = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,destroy,(void))

Void FlxBasic_obj::kill( ){
{
		HX_STACK_FRAME("flixel.FlxBasic","kill",0x1748eebe,"flixel.FlxBasic.kill","flixel/FlxBasic.hx",80,0xd8d6cfcf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		this->set_alive(false);
		HX_STACK_LINE(82)
		this->set_exists(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,kill,(void))

Void FlxBasic_obj::revive( ){
{
		HX_STACK_FRAME("flixel.FlxBasic","revive",0xb3f01175,"flixel.FlxBasic.revive","flixel/FlxBasic.hx",90,0xd8d6cfcf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		this->set_alive(true);
		HX_STACK_LINE(92)
		this->set_exists(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,revive,(void))

Void FlxBasic_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxBasic","update",0x307e9d29,"flixel.FlxBasic.update","flixel/FlxBasic.hx",102,0xd8d6cfcf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(102)
		(::flixel::FlxBasic_obj::activeCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,update,(void))

Void FlxBasic_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxBasic","draw",0x12af3b24,"flixel.FlxBasic.draw","flixel/FlxBasic.hx",113,0xd8d6cfcf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		(::flixel::FlxBasic_obj::visibleCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,draw,(void))

::String FlxBasic_obj::toString( ){
	HX_STACK_FRAME("flixel.FlxBasic","toString",0x03b3efcc,"flixel.FlxBasic.toString","flixel/FlxBasic.hx",118,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(120)
		_this->label = HX_HCSTRING("active","\xc6","\x41","\x46","\x16");
		HX_STACK_LINE(120)
		bool tmp3 = this->active;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		_this->value = tmp3;
		HX_STACK_LINE(120)
		tmp = _this;
	}
	HX_STACK_LINE(121)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(121)
		_this->label = HX_HCSTRING("visible","\x72","\x78","\x24","\xa3");
		HX_STACK_LINE(121)
		bool tmp4 = this->visible;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		_this->value = tmp4;
		HX_STACK_LINE(121)
		tmp1 = _this;
	}
	HX_STACK_LINE(122)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(122)
		_this->label = HX_HCSTRING("alive","\xcd","\x63","\x91","\x21");
		HX_STACK_LINE(122)
		bool tmp5 = this->alive;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		_this->value = tmp5;
		HX_STACK_LINE(122)
		tmp2 = _this;
	}
	HX_STACK_LINE(123)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(123)
		_this->label = HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf");
		HX_STACK_LINE(123)
		bool tmp6 = this->exists;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		_this->value = tmp6;
		HX_STACK_LINE(123)
		tmp3 = _this;
	}
	HX_STACK_LINE(119)
	::String tmp4 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(119)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,toString,return )

bool FlxBasic_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_visible",0x942af475,"flixel.FlxBasic.set_visible","flixel/FlxBasic.hx",127,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(128)
	bool tmp = this->visible = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_visible,return )

bool FlxBasic_obj::set_active( bool Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_active",0x086e7723,"flixel.FlxBasic.set_active","flixel/FlxBasic.hx",132,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(133)
	bool tmp = this->active = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_active,return )

bool FlxBasic_obj::set_exists( bool Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_exists",0xb2085339,"flixel.FlxBasic.set_exists","flixel/FlxBasic.hx",137,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(138)
	bool tmp = this->exists = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_exists,return )

bool FlxBasic_obj::set_alive( bool Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_alive",0x59c1c910,"flixel.FlxBasic.set_alive","flixel/FlxBasic.hx",142,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(143)
	bool tmp = this->alive = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_alive,return )

::flixel::FlxCamera FlxBasic_obj::get_camera( ){
	HX_STACK_FRAME("flixel.FlxBasic","get_camera",0xa636dd8e,"flixel.FlxBasic.get_camera","flixel/FlxBasic.hx",147,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	bool tmp = (this->_cameras == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	if ((tmp1)){
		HX_STACK_LINE(148)
		int tmp3 = this->_cameras->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		tmp2 = (tmp4 == (int)0);
	}
	else{
		HX_STACK_LINE(148)
		tmp2 = true;
	}
	HX_STACK_LINE(148)
	::flixel::FlxCamera tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	if ((tmp2)){
		HX_STACK_LINE(148)
		tmp3 = ::flixel::FlxCamera_obj::defaultCameras->__get((int)0).StaticCast< ::flixel::FlxCamera >();
	}
	else{
		HX_STACK_LINE(148)
		tmp3 = this->_cameras->__get((int)0).StaticCast< ::flixel::FlxCamera >();
	}
	HX_STACK_LINE(148)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_camera,return )

::flixel::FlxCamera FlxBasic_obj::set_camera( ::flixel::FlxCamera Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_camera",0xa9b47c02,"flixel.FlxBasic.set_camera","flixel/FlxBasic.hx",152,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(153)
	bool tmp = (this->_cameras == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	if ((tmp)){
		HX_STACK_LINE(154)
		this->_cameras = Array_obj< ::Dynamic >::__new().Add(Value);
	}
	else{
		HX_STACK_LINE(156)
		::flixel::FlxCamera tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		this->_cameras[(int)0] = tmp1;
	}
	HX_STACK_LINE(157)
	::flixel::FlxCamera tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_camera,return )

Array< ::Dynamic > FlxBasic_obj::get_cameras( ){
	HX_STACK_FRAME("flixel.FlxBasic","get_cameras",0xc9caff25,"flixel.FlxBasic.get_cameras","flixel/FlxBasic.hx",161,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	bool tmp = (this->_cameras == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		return ::flixel::FlxCamera_obj::defaultCameras;
	}
	else{
		HX_STACK_LINE(162)
		return this->_cameras;
	}
	HX_STACK_LINE(162)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_cameras,return )

Array< ::Dynamic > FlxBasic_obj::set_cameras( Array< ::Dynamic > Value){
	HX_STACK_FRAME("flixel.FlxBasic","set_cameras",0xd4380631,"flixel.FlxBasic.set_cameras","flixel/FlxBasic.hx",167,0xd8d6cfcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(167)
	return this->_cameras = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_cameras,return )

int FlxBasic_obj::activeCount;

int FlxBasic_obj::visibleCount;


FlxBasic_obj::FlxBasic_obj()
{
}

void FlxBasic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBasic);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(alive,"alive");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(flixelType,"flixelType");
	HX_MARK_MEMBER_NAME(_cameras,"_cameras");
	HX_MARK_END_CLASS();
}

void FlxBasic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(alive,"alive");
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(flixelType,"flixelType");
	HX_VISIT_MEMBER_NAME(_cameras,"_cameras");
}

Dynamic FlxBasic_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { return alive; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == hx::paccAlways) return get_camera(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == hx::paccAlways) return get_cameras(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { return _cameras; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alive") ) { return set_alive_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelType") ) { return flixelType; }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"set_exists") ) { return set_exists_dyn(); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return get_camera_dyn(); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return set_camera_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cameras") ) { return get_cameras_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return set_cameras_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxBasic_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"activeCount") ) { outValue = activeCount; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"visibleCount") ) { outValue = visibleCount; return true;  }
	}
	return false;
}

Dynamic FlxBasic_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { if (inCallProp == hx::paccAlways) return set_alive(inValue);alive=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return set_active(inValue);active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { if (inCallProp == hx::paccAlways) return set_exists(inValue);exists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == hx::paccAlways) return set_camera(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == hx::paccAlways) return set_cameras(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { _cameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelType") ) { flixelType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBasic_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"activeCount") ) { activeCount=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"visibleCount") ) { visibleCount=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxBasic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("alive","\xcd","\x63","\x91","\x21"));
	outFields->push(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("cameras","\x2e","\x8a","\x31","\xe3"));
	outFields->push(HX_HCSTRING("flixelType","\x36","\xbf","\x78","\x58"));
	outFields->push(HX_HCSTRING("_cameras","\xaf","\xe3","\xe9","\x1c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBasic_obj,ID),HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,alive),HX_HCSTRING("alive","\xcd","\x63","\x91","\x21")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,exists),HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")},
	{hx::fsInt,(int)offsetof(FlxBasic_obj,flixelType),HX_HCSTRING("flixelType","\x36","\xbf","\x78","\x58")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBasic_obj,_cameras),HX_HCSTRING("_cameras","\xaf","\xe3","\xe9","\x1c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxBasic_obj::activeCount,HX_HCSTRING("activeCount","\x29","\x45","\xa8","\xa6")},
	{hx::fsInt,(void *) &FlxBasic_obj::visibleCount,HX_HCSTRING("visibleCount","\xfd","\x5e","\xe8","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("alive","\xcd","\x63","\x91","\x21"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("flixelType","\x36","\xbf","\x78","\x58"),
	HX_HCSTRING("_cameras","\xaf","\xe3","\xe9","\x1c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("revive","\x55","\xfa","\x76","\x0a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("set_exists","\x19","\x2c","\xe5","\xb3"),
	HX_HCSTRING("set_alive","\x30","\xac","\x8b","\x48"),
	HX_HCSTRING("get_camera","\x6e","\xb6","\x13","\xa8"),
	HX_HCSTRING("set_camera","\xe2","\x54","\x91","\xab"),
	HX_HCSTRING("get_cameras","\x45","\xea","\x2b","\x69"),
	HX_HCSTRING("set_cameras","\x51","\xf1","\x98","\x73"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBasic_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxBasic_obj::activeCount,"activeCount");
	HX_MARK_MEMBER_NAME(FlxBasic_obj::visibleCount,"visibleCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::activeCount,"activeCount");
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::visibleCount,"visibleCount");
};

#endif

hx::Class FlxBasic_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("activeCount","\x29","\x45","\xa8","\xa6"),
	HX_HCSTRING("visibleCount","\xfd","\x5e","\xe8","\xbf"),
	::String(null()) };

void FlxBasic_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxBasic","\x4e","\xa5","\x2f","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBasic_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBasic_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBasic_obj >;
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

void FlxBasic_obj::__boot()
{
	activeCount= (int)0;
	visibleCount= (int)0;
}

} // end namespace flixel
