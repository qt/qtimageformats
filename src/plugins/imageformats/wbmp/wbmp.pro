TARGET = qwbmp
load(qt_plugin)

HEADERS += qwbmphandler.h
SOURCES += qwbmphandler.cpp
OTHER_FILES += wbmp.json

SOURCES += main.cpp

DESTDIR = $$QT.gui.plugins/imageformats
target.path += $$[QT_INSTALL_PLUGINS]/imageformats
INSTALLS += target
