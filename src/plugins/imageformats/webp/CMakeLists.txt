# Generated from webp.pro.

#####################################################################
## qwebp Plugin:
#####################################################################

add_qt_plugin(qwebp
    TYPE imageformats
    CLASS_NAME QWebpPlugin
    SOURCES
        main.cpp
        qwebphandler.cpp qwebphandler_p.h
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
        WrapWebP::WrapWebP
        Qt::Gui # special case
)

#### Keys ignored in scope 1:.:.:webp.pro:<TRUE>:
# OTHER_FILES = "webp.json"
# QT_FOR_CONFIG = "imageformats-private"
# _LOADED = "qt_plugin"
