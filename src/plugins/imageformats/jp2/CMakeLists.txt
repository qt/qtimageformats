# Generated from jp2.pro.

#####################################################################
## qjp2 Plugin:
#####################################################################

add_qt_plugin(qjp2
    TYPE imageformats
    SOURCES
        main.cpp
        qjp2handler.cpp qjp2handler_p.h
    LIBRARIES
        WrapJasper::WrapJasper
        Qt::Gui # special case
)

#### Keys ignored in scope 1:.:.:jp2.pro:<TRUE>:
# OTHER_FILES = "jp2.json"
# PLUGIN_CLASS_NAME = "QJp2Plugin"
# QT_FOR_CONFIG = "imageformats-private"
# _LOADED = "qt_plugin"
