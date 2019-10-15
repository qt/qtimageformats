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
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:wbmp.pro:<TRUE>:
# OTHER_FILES = "wbmp.json"
# _LOADED = "qt_plugin"
