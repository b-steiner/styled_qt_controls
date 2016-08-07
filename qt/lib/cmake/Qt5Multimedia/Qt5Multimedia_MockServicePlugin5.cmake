
add_library(Qt5::MockServicePlugin5 MODULE IMPORTED)

_populate_Multimedia_plugin_properties(MockServicePlugin5 RELEASE "mediaservice/mockserviceplugin5.dll")

list(APPEND Qt5Multimedia_PLUGINS Qt5::MockServicePlugin5)
