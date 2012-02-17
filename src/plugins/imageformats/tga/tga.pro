TARGET = qtga
load(qt_plugin)

HEADERS += qtgahandler.h \
    qtgafile.h
SOURCES += qtgahandler.cpp \
    qtgafile.cpp
OTHER_FILES += tga.json

SOURCES += main.cpp

DESTDIR = $$QT.gui.plugins/imageformats
target.path += $$[QT_INSTALL_PLUGINS]/imageformats
INSTALLS += target

symbian: TARGET.UID3=0x20031E99
