# Generated from heif.pro.

#####################################################################
## tst_qheif Test:
#####################################################################

add_qt_test(tst_qheif
    SOURCES
        tst_qheif.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
add_qt_resource(tst_qheif "heif" PREFIX "/" BASE "../../shared/images" FILES
    heif/col320x480.heic
    heif/newlogoCCW.heic)


#### Keys ignored in scope 1:.:.:heif.pro:<TRUE>:
# CONFIG = "-app_bundle" "testcase"
