TEMPLATE = app
TARGET = tst_bench_qmng
DEPENDPATH += .
INCLUDEPATH += .

QT = core gui testlib
CONFIG -= app_bundle

SOURCES += tst_qmng.cpp
RESOURCES += $$PWD/../../shared/images/mng.qrc
