TARGET  = qmng

PLUGIN_TYPE = imageformats
PLUGIN_CLASS_NAME = QMngPlugin
load(qt_plugin)

include(qmnghandler.pri)
SOURCES += main.cpp
OTHER_FILES += mng.json

DESTDIR = $$QT.gui.plugins/imageformats
target.path += $$[QT_INSTALL_PLUGINS]/imageformats
INSTALLS += target

