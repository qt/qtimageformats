# Generated from macjp2.pro.

#####################################################################
## qmacjp2 Plugin:
#####################################################################

qt_add_plugin(qmacjp2
    TYPE imageformats
    CLASS_NAME QMacJp2Plugin
    SOURCES
        ../shared/qiiofhelpers.cpp ../shared/qiiofhelpers_p.h
        main.cpp
        qmacjp2handler.cpp qmacjp2handler.h
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

#### Keys ignored in scope 1:.:.:macjp2.pro:<TRUE>:
# OTHER_FILES = "macjp2.json"
