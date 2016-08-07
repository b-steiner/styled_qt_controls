
add_library(Qt5::MockServicePlugin3 MODULE IMPORTED)

_populate_Multimedia_plugin_properties(MockServicePlugin3 RELEASE "mediaservice/mockserviceplugin3.dll")

list(APPEND Qt5Multimedia_PLUGINS Qt5::MockServicePlugin3)
