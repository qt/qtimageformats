TEMPLATE = subdirs
SUBDIRS = \
    dds \
    icns \
    tga \
    tiff \
    wbmp \
    webp

config_jasper: SUBDIRS += jp2
config_libmng: SUBDIRS += mng

winrt {
    SUBDIRS -= tiff \
               tga
}

winrt: SUBDIRS -= webp
