TEMPLATE = subdirs
SUBDIRS = \
    tga \
    wbmp \
    mng \
    tiff \
    dds \
    icns

winrt {
    SUBDIRS -= tiff \
               tga
}
