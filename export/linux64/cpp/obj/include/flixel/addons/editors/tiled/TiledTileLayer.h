#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileLayer
#define INCLUDED_flixel_addons_editors_tiled_TiledTileLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTile)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTileLayer)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledTileLayer_obj : public ::flixel::addons::editors::tiled::TiledLayer_obj{
	public:
		typedef ::flixel::addons::editors::tiled::TiledLayer_obj super;
		typedef TiledTileLayer_obj OBJ_;
		TiledTileLayer_obj();
		Void __construct(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledTileLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledTileLayer_obj > __new(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledTileLayer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledTileLayer","\x8d","\xf7","\x5a","\xcb"); }

		static void __boot();
		static ::String BASE64_CHARS;
		int x;
		int y;
		int width;
		int height;
		Array< ::Dynamic > tiles;
		::String encoding;
		::String csvData;
		Array< int > tileArray;
		::haxe::xml::Fast xmlData;
		virtual ::openfl::_legacy::utils::ByteArray getByteArrayData( );
		Dynamic getByteArrayData_dyn();

		virtual ::openfl::_legacy::utils::ByteArray base64ToByteArray( ::String data);
		Dynamic base64ToByteArray_dyn();

		virtual int resolveTile( int globalTileId);
		Dynamic resolveTile_dyn();

		virtual ::String get_encoding( );
		Dynamic get_encoding_dyn();

		virtual ::String get_csvData( );
		Dynamic get_csvData_dyn();

		virtual Array< int > get_tileArray( );
		Dynamic get_tileArray_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledTileLayer */ 
