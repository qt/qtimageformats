TEMPLATE = subdirs
SUBDIRS = \
    dds \
    icns \
    jp2 \
    mng \
    tga \
    tiff \
    wbmp

wince:SUBDIRS -= jp2

winrt {
    SUBDIRS -= tiff \
               tga
}
