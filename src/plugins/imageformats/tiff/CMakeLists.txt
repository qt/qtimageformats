# Generated from tiff.pro.

#####################################################################
## qtiff Plugin:
#####################################################################

# special case begin
# Protect against case when ZLIB is found via QtGui in a static build,
# which means that we can't do a qt_find_package() here due to CMake
# complaining about not being able to make the ZLIB target global,
# because ZLIB was found in the QtGui directory scope (root level) and
# not in this directory scope.
if(BUILD_SHARED_LIBS)
    qt_find_package(ZLIB PROVIDED_TARGETS ZLIB::ZLIB)
endif()
# special case end

add_qt_plugin(qtiff
    TYPE imageformats
    CLASS_NAME QTiffPlugin
    SOURCES
        main.cpp
        qtiffhandler.cpp qtiffhandler_p.h
    LIBRARIES
        TIFF::TIFF
        ZLIB::ZLIB # special case
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Gui
        TIFF::TIFF # special case
)

#### Keys ignored in scope 1:.:.:tiff.pro:<TRUE>:
# OTHER_FILES = "tiff.json"
# PLUGIN_CLASS_NAME = "QTiffPlugin"
# PLUGIN_TYPE = "imageformats"
# QT_FOR_CONFIG = "imageformats-private"
# _LOADED = "qt_plugin"
