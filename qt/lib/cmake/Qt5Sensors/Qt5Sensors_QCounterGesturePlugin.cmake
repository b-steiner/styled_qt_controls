
add_library(Qt5::QCounterGesturePlugin MODULE IMPORTED)

_populate_Sensors_plugin_properties(QCounterGesturePlugin RELEASE "sensorgestures/qtsensorgestures_counterplugin.dll")

list(APPEND Qt5Sensors_PLUGINS Qt5::QCounterGesturePlugin)
