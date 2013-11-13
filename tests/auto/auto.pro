TEMPLATE = subdirs
SUBDIRS = \
    tga \
    wbmp \
    dds
contains(QT_CONFIG, system-zlib): SUBDIRS += mng tiff
