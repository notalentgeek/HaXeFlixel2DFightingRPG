#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#define INCLUDED_flixel_addons_editors_tiled_TiledLayerType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayerType)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class TiledLayerType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TiledLayerType_obj OBJ_;

	public:
		TiledLayerType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.addons.editors.tiled.TiledLayerType","\x7e","\x4d","\xb6","\x1a"); }
		::String __ToString() const { return HX_HCSTRING("TiledLayerType.","\x99","\xe1","\x50","\x27") + tag; }

		static ::flixel::addons::editors::tiled::TiledLayerType IMAGE;
		static inline ::flixel::addons::editors::tiled::TiledLayerType IMAGE_dyn() { return IMAGE; }
		static ::flixel::addons::editors::tiled::TiledLayerType OBJECT;
		static inline ::flixel::addons::editors::tiled::TiledLayerType OBJECT_dyn() { return OBJECT; }
		static ::flixel::addons::editors::tiled::TiledLayerType TILE;
		static inline ::flixel::addons::editors::tiled::TiledLayerType TILE_dyn() { return TILE; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledLayerType */ 
