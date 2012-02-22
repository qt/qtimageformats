TEMPLATE = subdirs
SUBDIRS = \
    tga \
    wbmp
contains(QT_CONFIG, system-zlib): SUBDIRS += mng tiff
