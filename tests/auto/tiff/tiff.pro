TEMPLATE = app
TARGET = tst_qtiff
DEPENDPATH += .
INCLUDEPATH += .

QT = core gui testlib
CONFIG -= app_bundle
CONFIG += testcase

SOURCES += tst_qtiff.cpp
RESOURCES += $$PWD/../../shared/images/tiff.qrc
