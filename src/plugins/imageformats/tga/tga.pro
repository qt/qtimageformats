TARGET = qtga

PLUGIN_TYPE = imageformats
load(qt_plugin)

HEADERS += qtgahandler.h \
    qtgafile.h
SOURCES += qtgahandler.cpp \
    qtgafile.cpp
OTHER_FILES += tga.json

SOURCES += main.cpp

symbian: TARGET.UID3=0x20031E99
