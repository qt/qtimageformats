# Generated from icns.pro.

#####################################################################
## qicns Plugin:
#####################################################################

qt_add_plugin(qicns
    TYPE imageformats
    CLASS_NAME QICNSPlugin
    SOURCES
        main.cpp
        qicnshandler.cpp qicnshandler_p.h
    DEFINES
        QT_NO_CAST_FROM_ASCII
        QT_NO_CAST_TO_ASCII
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:icns.pro:<TRUE>:
# OTHER_FILES = "icns.json"
