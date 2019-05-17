# Generated from jp2.pro.

#####################################################################
## tst_qjp2 Test:
#####################################################################

add_qt_test(tst_qjp2
    SOURCES
        tst_qjp2.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
add_qt_resource(tst_qjp2 "jp2" PREFIX "/" BASE "../../shared/images" FILES
    jp2/logo.bmp
    jp2/logo.jp2)


#### Keys ignored in scope 1:.:.:jp2.pro:<TRUE>:
# CONFIG = "-app_bundle" "testcase"
