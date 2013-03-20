SOURCES = libtiff.cpp
CONFIG -= qt dylib
mac:CONFIG -= app_bundle
win32:CONFIG += console
unix|win32-g++*: LIBS += -ltiff
else:win32: LIBS += libtiff.lib
