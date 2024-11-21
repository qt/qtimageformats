# Generated from macheif.pro.

#####################################################################
## QMacHeifPlugin Plugin:
#####################################################################

qt_internal_find_apple_system_framework(FWCoreFoundation
    CoreFoundation)
qt_internal_find_apple_system_framework(FWCoreGraphics CoreGraphics)
qt_internal_find_apple_system_framework(FWImageIO ImageIO)

qt_internal_add_plugin(QMacHeifPlugin
    OUTPUT_NAME qmacheif
    PLUGIN_TYPE imageformats
    SOURCES
        ../shared/qiiofhelpers.cpp ../shared/qiiofhelpers_p.h
        main.cpp
        qmacheifhandler.cpp qmacheifhandler.h
    INCLUDE_DIRECTORIES
        ../shared
    LIBRARIES
        ${FWCoreFoundation}
        ${FWCoreGraphics}
        ${FWImageIO}
        Qt::Core
        Qt::CorePrivate
        Qt::Gui
        Qt::GuiPrivate
)

#### Keys ignored in scope 1:.:.:macheif.pro:<TRUE>:
# OTHER_FILES = "macheif.json"
