
add_library(Qt5::AssimpSceneIOPlugin MODULE IMPORTED)

_populate_3DRender_plugin_properties(AssimpSceneIOPlugin RELEASE "sceneparsers/assimpsceneio.dll")

list(APPEND Qt53DRender_PLUGINS Qt5::AssimpSceneIOPlugin)
