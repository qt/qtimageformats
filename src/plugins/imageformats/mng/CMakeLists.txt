# Generated from mng.pro.

#####################################################################
## qmng Plugin:
#####################################################################

add_qt_plugin(qmng
    TYPE imageformats
    SOURCES
        main.cpp
        qmnghandler.cpp qmnghandler_p.h
)

#### Keys ignored in scope 1:.:.:mng.pro:<TRUE>:
# OTHER_FILES = "mng.json"
# PLUGIN_CLASS_NAME = "QMngPlugin"
# _LOADED = "qt_plugin"

## Scopes:
#####################################################################

extend_target(qmng CONDITION MSVC
    PUBLIC_LIBRARIES
        libmng.lib
)

extend_target(qmng CONDITION NOT MSVC
    PUBLIC_LIBRARIES
        mng
)
