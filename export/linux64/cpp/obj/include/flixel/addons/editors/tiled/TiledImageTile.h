#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageTile
#define INCLUDED_flixel_addons_editors_tiled_TiledImageTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledImageTile)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledImageTile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledImageTile_obj OBJ_;
		TiledImageTile_obj();
		Void __construct(::haxe::xml::Fast Source);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledImageTile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledImageTile_obj > __new(::haxe::xml::Fast Source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledImageTile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledImageTile","\xf3","\x77","\x70","\xff"); }

		::String id;
		Float width;
		Float height;
		::String source;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledImageTile */ 
