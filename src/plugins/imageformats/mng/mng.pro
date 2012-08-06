TARGET  = qmng
load(qt_plugin)

HEADERS += qmnghandler_p.h
SOURCES += qmnghandler.cpp
OTHER_FILES += mng.json
config_libmng {
        if(unix|win32-g++*):LIBS += -lmng
        else:win32:         LIBS += libmng.lib
} else {
    include($$PWD/../../../3rdparty/libmng.pri)
    *-g++*: QMAKE_CFLAGS_WARN_ON += -Wno-unused-parameter
}

SOURCES += main.cpp

DESTDIR = $$QT.gui.plugins/imageformats
target.path += $$[QT_INSTALL_PLUGINS]/imageformats
INSTALLS += target
