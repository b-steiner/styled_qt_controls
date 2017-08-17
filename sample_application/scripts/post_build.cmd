::	%1	SolutionDir
::  %2	OutDir
::	%3	ProjectDir
::  %4  Configuration

echo copying dlls

SET debug_append=
IF "%4" == "Debug" ( SET debug_append=d)

xcopy %1"qt\lib\Qt5Widgets%debug_append%.dll" %2 /d /y 1> nul
xcopy %1"qt\lib\Qt5Gui%debug_append%.dll" %2 /d /y 1> nul
xcopy %1"qt\lib\Qt5Core%debug_append%.dll" %2 /d /y 1> nul
xcopy %1"qt\lib\Qt5Xml%debug_append%.dll" %2 /d /y 1> nul
xcopy %1"qt\lib\Qt5WinExtras%debug_append%.dll" %2 /d /y 1> nul

IF not exist %2"platforms" (mkdir %2"platforms")
xcopy %1"qt\plugins\platforms\qwindows%debug_append%.dll" %2platforms /d /y 1> nul

IF not exist %2"imageformats" (mkdir %2"imageformats")

IF "%4" == "Debug" (
	xcopy %1"qt\plugins\imageformats\*d.dll" %2imageformats /d /y 1> nul
	) ELSE (
	xcopy %1"qt\plugins\imageformats\*.dll" %2imageformats /exclude:scripts\exclude_list.txt /d /y 1> nul
	)


xcopy %1"bin/styled_qt_controls.x64."%4"\*.dll" %2 /d /s /y 1> nul