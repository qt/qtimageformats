TEMPLATE = subdirs
SUBDIRS = \
    tga
contains(QT_CONFIG, system-zlib): SUBDIRS += mng
