# Generated from wbmp.pro.

#####################################################################
## qwbmp Plugin:
#####################################################################

add_qt_plugin(qwbmp
    TYPE imageformats
    CLASS_NAME QWbmpPlugin
    SOURCES
        main.cpp
        qwbmphandler.cpp qwbmphandler_p.h
    LIBRARIES # special case
        Qt::Gui # special case
)

#### Keys ignored in scope 1:.:.:wbmp.pro:<TRUE>:
# OTHER_FILES = "wbmp.json"
# PLUGIN_CLASS_NAME = "QWbmpPlugin"
# PLUGIN_TYPE = "imageformats"
# _LOADED = "qt_plugin"
