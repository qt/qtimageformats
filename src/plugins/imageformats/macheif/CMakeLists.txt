# Generated from macheif.pro.

#####################################################################
## qmacheif Plugin:
#####################################################################

# special case begin
find_library(FWCoreFoundation CoreFoundation)
find_library(FWCoreGraphics CoreGraphics)
find_library(FWImageIO ImageIO)
# special case end

add_qt_plugin(qmacheif
    TYPE imageformats
    CLASS_NAME QMacHeifPlugin
    SOURCES
        ../shared/qiiofhelpers.cpp ../shared/qiiofhelpers_p.h
        main.cpp
        qmacheifhandler.cpp qmacheifhandler.h
    INCLUDE_DIRECTORIES
        ../shared
    LIBRARIES
        Qt::CorePrivate
        Qt::GuiPrivate
    PUBLIC_LIBRARIES
        ${FWCoreFoundation}
        ${FWCoreGraphics}
        ${FWImageIO}
        Qt::Core
        Qt::Gui
)

#### Keys ignored in scope 1:.:.:macheif.pro:<TRUE>:
# OTHER_FILES = "macheif.json"
# _LOADED = "qt_plugin"
