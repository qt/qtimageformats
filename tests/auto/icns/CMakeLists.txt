# Generated from icns.pro.

#####################################################################
## tst_qicns Test:
#####################################################################

add_qt_test(tst_qicns
    SOURCES
        tst_qicns.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
add_qt_resource(tst_qicns "icns" PREFIX "/" BASE "../../shared/images" FILES
    icns/test-32bit.icns
    icns/test-jp2.icns
    icns/test-legacy.icns
    icns/test-png.icns
    icns/test-variants.icns
    icns/test-write-1024.png
    icns/test-write-128.png
    icns/test-write-16.png
    icns/test-write-256.png
    icns/test-write-32.png
    icns/test-write-512.png
    icns/test-write-64.png)


#### Keys ignored in scope 1:.:.:icns.pro:<TRUE>:
# CONFIG = "-app_bundle" "testcase"
