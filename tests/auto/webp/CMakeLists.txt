# Generated from webp.pro.

#####################################################################
## tst_qwebp Test:
#####################################################################

add_qt_test(tst_qwebp
    SOURCES
        tst_qwebp.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
)

# Resources:
add_qt_resource(tst_qwebp "webp" PREFIX "/" FILES
    images/kollada.png
    images/kollada.webp
    images/kollada_animation.webp
    images/kollada_lossless.webp
    images/kollada_noalpha.webp)


#### Keys ignored in scope 1:.:.:webp.pro:<TRUE>:
# CONFIG = "-app_bundle" "testcase"
