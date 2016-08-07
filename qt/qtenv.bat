REM Set up Windows SDK for 64bit
CALL "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" amd64
set PATH=D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtbase\bin;D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\qtrepotools\bin;D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0\gnuwin32\bin;%PATH%
set QMAKESPEC=win32-msvc2010
D:
cd D:\repos\styled_qt_controls\qt\qt-everywhere-opensource-src-5.7.0\qt-everywhere-opensource-src-5.7.0
configure -release -opengl desktop -opensource -nomake tests -nomake examples -platform win32-msvc2013