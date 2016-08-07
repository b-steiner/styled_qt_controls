::  %1  $(SolutionDir)
::	%2	$(ProjectDir)
::  %3  $(ProjectFileName)

java -jar "%1tools\qt_compiler\dist\qt_compiler.jar" %1 %2 %3 "%1qt\bin" \"bdl.styled_qt_controls\styled_qt_controls.hpp\"
set exitcode=%ERRORLEVEL%
if %exitcode%==-1 (
	echo error: qt_compiler failed, see output window for details
	exit %exitcode%
	)
if %exitcode%==-2 (
	echo error: qt_compiler changed project file. Please rebuild
	exit %exitcode%
)