echo creating documentation..

cd ..

if exist "doc/styled_qt_controls" rd "doc/styled_qt_controls/" /s /q
md "doc/styled_qt_controls/"

"tools/doxygen/doxygen.exe" "doc/doxyfile" 2> "doc/doxygen_error.log"