# Generated from wbmp.pro.

#####################################################################
## tst_qwbmp Test:
#####################################################################

add_qt_test(tst_qwbmp
    SOURCES
        tst_qwbmp.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
add_qt_resource(tst_qwbmp "wbmp" PREFIX "/" BASE "../../shared/images" FILES
    wbmp/qt-logo-big.wbmp
    wbmp/qt-logo-small.wbmp)


#### Keys ignored in scope 1:.:.:wbmp.pro:<TRUE>:
# CONFIG = "-app_bundle" "testcase"
