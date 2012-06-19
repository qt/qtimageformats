TARGET  = qmng
load(qt_plugin)

# QTDIR_build:REQUIRES = "!contains(QT_CONFIG, no-mng)"

include(qmnghandler.pri)
SOURCES += main.cpp
OTHER_FILES += mng.json

DESTDIR = $$QT.gui.plugins/imageformats
target.path += $$[QT_INSTALL_PLUGINS]/imageformats
INSTALLS += target
