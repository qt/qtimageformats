TEMPLATE = app
TARGET = tst_qwbmp
DEPENDPATH += .
INCLUDEPATH += .

QT = core gui testlib
CONFIG -= app_bundle
CONFIG += testcase

SOURCES += tst_qwbmp.cpp
RESOURCES += $$PWD/../../shared/images/wbmp.qrc
