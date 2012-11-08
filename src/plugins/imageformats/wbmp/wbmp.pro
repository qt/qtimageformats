TARGET = qwbmp

PLUGIN_TYPE = imageformats
load(qt_plugin)

HEADERS += qwbmphandler_p.h
SOURCES += qwbmphandler.cpp
OTHER_FILES += wbmp.json

SOURCES += main.cpp
