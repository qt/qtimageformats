TEMPLATE = subdirs
SUBDIRS = \
    tga \
    wbmp \
    dds \
    icns

contains(QT_CONFIG, system-zlib): SUBDIRS += mng tiff
