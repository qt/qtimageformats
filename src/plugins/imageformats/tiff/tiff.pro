TARGET  = qtiff
load(qt_plugin)

# QTDIR_build:REQUIRES = "!contains(QT_CONFIG, no-tiff)"

include(qtiffhandler.pri)
SOURCES += main.cpp

DESTDIR = $$QT.gui.plugins/imageformats
target.path += $$[QT_INSTALL_PLUGINS]/imageformats
INSTALLS += target
