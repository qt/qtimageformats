# Generated from tga.pro.

#####################################################################
## qtga Plugin:
#####################################################################

qt_add_plugin(qtga
    TYPE imageformats
    CLASS_NAME QTgaPlugin
    SOURCES
        main.cpp
        qtgafile.cpp qtgafile.h
        qtgahandler.cpp qtgahandler.h
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:tga.pro:<TRUE>:
# OTHER_FILES = "tga.json"
