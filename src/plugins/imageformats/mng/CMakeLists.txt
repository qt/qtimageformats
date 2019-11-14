# Generated from mng.pro.

#####################################################################
## qmng Plugin:
#####################################################################

qt_add_plugin(qmng
    TYPE imageformats
    CLASS_NAME QMngPlugin
    SOURCES
        main.cpp
        qmnghandler.cpp qmnghandler_p.h
    LIBRARIES
        mng
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:mng.pro:<TRUE>:
# OTHER_FILES = "mng.json"
# QT_FOR_CONFIG = "imageformats-private"
