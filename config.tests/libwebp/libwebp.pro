SOURCES = libwebp.cpp
CONFIG -= qt dylib
mac:CONFIG -= app_bundle
win32:CONFIG += console
unix|win32-g++*: LIBS += -lwebp
else:win32: LIBS += libwebp.lib
