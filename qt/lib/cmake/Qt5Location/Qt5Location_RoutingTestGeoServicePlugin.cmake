
add_library(Qt5::RoutingTestGeoServicePlugin MODULE IMPORTED)

_populate_Location_plugin_properties(RoutingTestGeoServicePlugin RELEASE "geoservices/qtgeoservices_routingplugin.dll")

list(APPEND Qt5Location_PLUGINS Qt5::RoutingTestGeoServicePlugin)
