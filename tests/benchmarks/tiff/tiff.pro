TEMPLATE = app
TARGET = tst_bench_qtiff
DEPENDPATH += .
INCLUDEPATH += .

QT = core gui testlib
CONFIG -= app_bundle

SOURCES += tst_qtiff.cpp
RESOURCES += ../../shared/images/tiff.qrc
