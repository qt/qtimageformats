# Generated from jp2.pro.

#####################################################################
## qjp2 Plugin:
#####################################################################

add_qt_plugin(qjp2
    TYPE imageformats
    CLASS_NAME QJp2Plugin
    SOURCES
        main.cpp
        qjp2handler.cpp qjp2handler_p.h
    LIBRARIES
        WrapJasper::WrapJasper
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:jp2.pro:<TRUE>:
# OTHER_FILES = "jp2.json"
# QT_FOR_CONFIG = "imageformats-private"
# _LOADED = "qt_plugin"
