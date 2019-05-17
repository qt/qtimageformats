# Generated from tga.pro.

#####################################################################
## qtga Plugin:
#####################################################################

add_qt_plugin(qtga
    TYPE imageformats
    SOURCES
        main.cpp
        qtgafile.cpp qtgafile.h
        qtgahandler.cpp qtgahandler.h
    LIBRARIES # special case
        Qt::Gui # special case

)

#### Keys ignored in scope 1:.:.:tga.pro:<TRUE>:
# OTHER_FILES = "tga.json"
# PLUGIN_CLASS_NAME = "QTgaPlugin"
# _LOADED = "qt_plugin"
