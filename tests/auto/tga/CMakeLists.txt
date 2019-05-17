# Generated from tga.pro.

#####################################################################
## tst_qtga Test:
#####################################################################

add_qt_test(tst_qtga
    SOURCES
        tst_qtga.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
add_qt_resource(tst_qtga "tga" PREFIX "/" BASE "../../shared/images" FILES
    tga/test-flag.tga)


#### Keys ignored in scope 1:.:.:tga.pro:<TRUE>:
# CONFIG = "-app_bundle" "testcase"
