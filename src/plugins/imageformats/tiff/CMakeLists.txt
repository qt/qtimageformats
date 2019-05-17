# Generated from tiff.pro.

#####################################################################
## qtiff Plugin:
#####################################################################

qt_find_package(ZLIB PROVIDED_TARGETS ZLIB::ZLIB) # special case

add_qt_plugin(qtiff
    TYPE imageformats
    SOURCES
        main.cpp
        qtiffhandler.cpp qtiffhandler_p.h
    LIBRARIES # special case
        ZLIB::ZLIB # special case
    PUBLIC_LIBRARIES # special case
        Qt::Gui # special case
        TIFF::TIFF # special case
)

#### Keys ignored in scope 1:.:.:tiff.pro:<TRUE>:
# OTHER_FILES = "tiff.json"
# PLUGIN_CLASS_NAME = "QTiffPlugin"
# _LOADED = "qt_plugin"

## Scopes:
#####################################################################

# special case: remove 3rdparty code
