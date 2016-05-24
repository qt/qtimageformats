TARGET  = qmacjp2
PLUGIN_TYPE = imageformats
PLUGIN_CLASS_NAME = QMacJp2Plugin

LIBS += -framework ImageIO

QT += core-private gui-private platformsupport-private

SOURCES += \
    qmacjp2handler.cpp \
    main.cpp \
    qiiofhelpers.cpp

HEADERS += \
    qmacjp2handler.h \
    qiiofhelpers_p.h

OTHER_FILES += macjp2.json

load(qt_plugin)
