
add_library(Qt5::MockServicePlugin4 MODULE IMPORTED)

_populate_Multimedia_plugin_properties(MockServicePlugin4 RELEASE "mediaservice/mockserviceplugin4.dll")

list(APPEND Qt5Multimedia_PLUGINS Qt5::MockServicePlugin4)
