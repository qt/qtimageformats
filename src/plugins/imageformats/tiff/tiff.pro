TARGET  = qtiff
load(qt_plugin)

include(qtiffhandler.pri)
SOURCES += main.cpp
OTHER_FILES += tiff.json

DESTDIR = $$QT.gui.plugins/imageformats
target.path += $$[QT_INSTALL_PLUGINS]/imageformats
INSTALLS += target
