::	%1	SolutionDir
::  %2	OutDir
::	%3	ProjectDir
::  %4  Configuration

echo copying dlls
xcopy %1"qt\lib\Qt5Widgets.dll" %2 /d /y 1> nul
xcopy %1"qt\lib\Qt5Gui.dll" %2 /d /y 1> nul
xcopy %1"qt\lib\Qt5Core.dll" %2 /d /y 1> nul
xcopy %1"qt\lib\Qt5Xml.dll" %2 /d /y 1> nul
xcopy %1"qt\lib\Qt5WinExtras.dll" %2 /d /y 1> nul
IF not exist %2"platforms" (mkdir %2"platforms")
xcopy %1"qt\plugins\platforms\qwindows.dll" %2platforms /d /y 1> nul
IF not exist %2"imageformats" (mkdir %2"imageformats")
xcopy %1"qt\plugins\imageformats\*.dll" %2imageformats /d /y 1> nul


xcopy %1"bin/"%4"\styled_qt_controls\*.dll" %2 /d /s /y 1> nul