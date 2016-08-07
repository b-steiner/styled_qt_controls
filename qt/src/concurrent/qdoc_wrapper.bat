@echo off
SetLocal EnableDelayedExpansion
(set QT_VERSION=5.7.0)
(set QT_VER=5.7)
(set QT_VERSION_TAG=570)
(set QT_INSTALL_DOCS=D:/repos/styled_qt_controls/qt/qt-everywhere-opensource-src-5.7.0/qt-everywhere-opensource-src-5.7.0/qtbase/doc)
(set PATH=D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtbase\lib;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtbase\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtbase\plugins
)
D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtbase\bin\qdoc.exe %*
EndLocal
