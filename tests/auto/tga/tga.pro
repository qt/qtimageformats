TEMPLATE = app
TARGET = tst_qtga
DEPENDPATH += .
INCLUDEPATH += .

QT = core gui testlib
CONFIG -= app_bundle
CONFIG += testcase

SOURCES += tst_qtga.cpp
RESOURCES += $$PWD/../../shared/images/tga.qrc
