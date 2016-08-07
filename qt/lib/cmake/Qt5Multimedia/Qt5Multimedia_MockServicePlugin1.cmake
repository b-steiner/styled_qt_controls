
add_library(Qt5::MockServicePlugin1 MODULE IMPORTED)

_populate_Multimedia_plugin_properties(MockServicePlugin1 RELEASE "mediaservice/mockserviceplugin1.dll")

list(APPEND Qt5Multimedia_PLUGINS Qt5::MockServicePlugin1)
