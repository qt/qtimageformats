TEMPLATE = subdirs
SUBDIRS = \
    tga \
    wbmp \
    dds \
    icns \
    jp2

contains(QT_CONFIG, system-zlib): SUBDIRS += mng tiff
