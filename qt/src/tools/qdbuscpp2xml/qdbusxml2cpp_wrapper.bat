@echo off
SetLocal EnableDelayedExpansion
(set PATH=D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtbase\lib;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtbase\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtbase\plugins
)
D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtbase\bin\qdbusxml2cpp.exe %*
EndLocal
